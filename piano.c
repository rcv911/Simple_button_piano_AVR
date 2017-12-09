#include <avr\io.h>
#include <avr\interrupt.h>
#include <avr\signal.h>

#define B0 PINB == 254
#define B1 PINB == 253
#define B2 PINB == 251
#define B3 PINB == 247
#define B4 PINB == 239
#define B5 PINB == 223
#define B6 PINB == 191

ISR(TIMER1_COMPA_vect){
  PORTA=~PORTA; // PA2 = ~PA2 --> 0b00000100
}

void main(void) {
   asm("cli"); // Disable global interrupts

   // I/O port
   DDRA = 4;
   PORTA = 0;
   // Buttons
   DDRB = 0x00;
   PORTB = 255;

   // Timer1
   TCCR1A=0;
   TCCR1B=(1<<WGM12)|(1<<CS10); // CTC mode, CLK/1

   OCR1A = 0;

   TIMSK|=(1<<OCIE1A); // Enable compare interrupt on 16bit timer 1
   TCNT1=0; // Init couter

   asm("sei"); // Enable global interrupts

   while(1) { 	
		if(B0) {
			OCR1A=22932;	//do
		}
		else if(B1) {	
			OCR1A=20429;	//re
		}
		else if(B2){
			OCR1A=18204;	//mi
		}
		else if(B3){
			OCR1A=17182;	//fa
		}
		else if(B4){
			OCR1A=15306;	//so
		}
		else if(B5){
			OCR1A=13638;	//la
		}
		else if(B6){
			OCR1A=12148;	//ti
		}
		else {
			OCR1A = 0;
		}
	}
}


