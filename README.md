# SoundRat

A desktop sound mixer for controlling the volumes of applications on your computer. This repo contains CAD, PCB, firmware, and software.

Includes 5 rotary encoders (with buttons!), 16 RGB LEDs, and an RP2040-zero microcontroller, all on a custom PCB!

The software runs on your computer and reads from SoundRat to update application volumes, the firmware simply sends that data over and receives volume/peak data.

I made this project as a replacement for my very crude Deej that performs a similar function. It is simply an Arduino Uno and 5 linear potentiometers and does its job, but leaves much to be desired. I wanted more out of it, especially being a sound guy at my school's theatre, I wanted to see the volume levels accurately (cause the linear pots are really terrible), and peak level LED indicators (basically visualizing the current volume of the audio outputting from the application). Deej is a really cool project, as it is just an Arduino project you load onto a nano and software that runs really nicely. It's easily customizable and I hope to do that here as well. I've already found a lot of use out of my Deej, and I figured it would make a good project to make a spirtual successor.

## Images
