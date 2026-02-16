#include <Arduino.h>

#define EC_1A 0
#define EC_1B 1
#define EC_BTN_1 10

#define EC_2A 2
#define EC_2B 3
#define EC_BTN_2 11

#define EC_3A 4
#define EC_3B 5
#define EC_BTN_3 12

#define EC_4A 6
#define EC_4B 7
#define EC_BTN_4 13

#define EC_5A 8
#define EC_5B 9
#define EC_BTN_5 14

#define LED_VOL 15
#define LED_PEAK 26

typedef struct {
  uint8_t a, b, btn, pos, lastPos;
} encoder_t;

encoder_t encoders[] = {
  { EC_1A, EC_1B, EC_BTN_1, 50, 50 },
  { EC_2A, EC_2B, EC_BTN_2, 50, 50 },
  { EC_3A, EC_3B, EC_BTN_3, 50, 50 },
  { EC_4A, EC_4B, EC_BTN_4, 50, 50 },
  { EC_5A, EC_5B, EC_BTN_5, 50, 50 }
};

void setup() {
  Serial.begin(115200);
  
  for (int i = 0; i < sizeof(encoders); i++) {
    pinMode(encoders[i].a, INPUT_PULLUP);
    pinMode(encoders[i].b, INPUT_PULLUP);
    pinMode(encoders[i].btn, INPUT_PULLUP);

    attachInterrupt(encoders[i].a, [i]() { on_encoder_change(i) }, CHANGE);
  }

  pinMode(LED_VOL, OUTPUT);
  pinMode(LED_PEAK, OUTPUT);
}

// encoders are a lot more complicated than i thought
// https://www.build-electronic-circuits.com/arduino-rotary-encoder/
void on_encoder_change(int i) {
  int MSB = digitalRead(encoderPinA); // MSB = most significant bit
  int LSB = digitalRead(encoderPinB); // LSB = least significant bit

  // bitshifting my behated
  int encoded = (MSB << 1) | LSB;
  int sum = (encoders[i].lastPos << 2) | encoded;

  if(sum == 0b1101 || sum == 0b0100 || sum == 0b0010 || sum == 0b1011) encoders[i].pos++;
  if(sum == 0b1110 || sum == 0b0111 || sum == 0b0001 || sum == 0b1000) encoders[i].pos--;

  encoders[i].lastPos = encoders[i].pos;
}

std::string get_encoder_data(int i) {
  return encoders[i].pos + "," + digitalRead(encoders[i].btn);
}

std::string print_data() {
  std::string data = "";

  for (int i = 0; i < sizeof(encoders); i++) {
    data = data + get_encoder_data(i) + ";";
  }

  return data;
}

void read_serial_data() {
  char endMarker = '\n';
  std::string received = "";
  
  while (Serial.available() > 0) {
    char c = Serial.read();
    
    received += c;

    if (c == "\n")
      break;
  }

  return received;
}

void loop() {
  delay(50);

  // simply print the data for all the encoders for the computer to read
  print_data();

  // then read whatever is coming in to display peak levels
  read_serial_data();

  // TODO: update LEDs
}