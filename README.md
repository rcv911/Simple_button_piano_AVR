## Simple 7buttons piano on ATmega16

Simple piano on ATmega16 using 7 buttons (PINB Atmega16) and speaker (PINA2 - GND ATmega16). It can be PC speaker. Datasheet of Atmega16 you can find in another [project](https://github.com/rcv911/Simple_Timer_AVR) or on [official page](http://www.microchip.com/design-centers/8-bit).
###### Musical scale in Herz
> Do  - 261.6 Hz
> Re  - 293.7 Hz
> Mi  - 329.6 Hz
> Fa  - 349.2 Hz
> Sol - 392.0 Hz
> La  - 440.0 Hz
> Ti  - 493.9 Hz   


## Motivation

Simple electronic musical instrument on MCU is a funny stuff. What can you make? It's your own imagination. I'll give you one example: you can make cool key trinket and play imperial march from Star Wars movie for your friends.   

## Installation

0. You can use another MCUs. All you need is datasheet. Don't forget change pins!  
1. Make project in AVR Studio choosing 8-bit MCU ATmega16.  
2. Copy code from `piano.c` into your `main.c` file.
3. Build project.

## License

Free
