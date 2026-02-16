# SoundRat

A desktop sound mixer for controlling the volumes of applications on your computer. This repo contains CAD, PCB, firmware, and software.

Includes 5 rotary encoders (with buttons!), 16 RGB LEDs, and an RP2040-zero microcontroller, all on a custom PCB in a custom case!

The software runs on your computer and reads from SoundRat to update application volumes, the firmware simply sends that data over and receives volume/peak data.

I made this project as a replacement for my very crude Deej that performs a similar function. It is simply an Arduino Uno and 5 linear potentiometers and does its job, but leaves much to be desired. I wanted more out of it, especially being a sound guy at my school's theatre, I wanted to see the volume levels accurately (cause the linear pots are really terrible), and peak level LED indicators (basically visualizing the current volume of the audio outputting from the application). Deej is a really cool project, as it is just an Arduino project you load onto a nano and software that runs really nicely. It's easily customizable and I hope to do that here as well. I've already found a lot of use out of my Deej, and I figured it would make a good project to make a spirtual successor.

A lot of inspiration is taken from Deej (check it out [here](https://github.com/omriharel/deej)), but all designs are by me!

## Images

<img width="1480" height="474" alt="image" src="https://github.com/user-attachments/assets/c344e211-c53a-4b69-9e07-1f23d9eba82a" />
<img width="1517" height="650" alt="image" src="https://github.com/user-attachments/assets/2fc837ad-4f38-4159-81d8-d2478f8009d7" />
<img width="670" height="332" alt="image" src="https://github.com/user-attachments/assets/bef22d42-cd86-4b94-944f-320174ceff01" />
<img width="1647" height="1152" alt="image" src="https://github.com/user-attachments/assets/635c0854-d443-4656-a991-a4cb5ba01362" />

## BOM

All items from Aliexpress

| Name | Qtd | Price | Shipping | Link |
| ---- | --- | ----- | -------- | ---- |
| RP2040-Zero RP2040 for Raspberry Pi Microcontroller PICO Development Board Module Dual-core Cortex M0+ Processor 2MB Flash | 1 | $1.99 | $0 | https://www.aliexpress.us/item/3256807207087581.html?mp=1&pdp_npi=6%40dis!USD!USD%208.03!USD%201.99!!USD%201.99!!!%402103126e17712032175756586e399f!12000040563329988!ct!US!6602055344!!1!0!&gatewayAdapt=glo2usa |
| 5PCS 360 Degree Rotary Encoder EC12 RE12 Audio Encoder Coding 5Pin 24 Position With Push Button Switch Handle Length 12.5MM | 1x5pcs | $2.56 | $0 | https://www.aliexpress.us/item/3256801922952476.html?mp=1&pdp_npi=6%40dis!USD!USD%202.44!USD%202.36!!USD%202.36!!!%402103126e17712032175756586e399f!12000018768589822!ct!US!6602055344!!1!0!&gatewayAdapt=glo2usa |
| 2~1000Pcs 4 Color in 1 SK6812 RGBW RGBWW RGBNW WWA RGB White SMD 3535 5050 Individually Addressable LED Chip Pixel as WS2812B 5V | 2x10pcs | $5.03 | $3.98 | https://www.aliexpress.us/item/2251832480376635.html?mp=1&pdp_npi=6%40dis!USD!USD%205.18!USD%205.03!!USD%205.03!!!%402103126e17712032175756586e399f!12000038354525581!ct!US!6602055344!!2!0!&gatewayAdapt=glo2usa |
| PCB from JLCPCB | 1x5pcs | $2.00 | $3.12 |

**Total**: $23.77
