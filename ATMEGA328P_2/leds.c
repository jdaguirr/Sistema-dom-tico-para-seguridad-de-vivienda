#include "leds.h"

void encendido_leds(char *estado1, char *estado2, char *estado3){

	// Ventana comedor

		if (PIND &(1<<0)) { 
			PORTC = (1<<DDC1);
			estado1[0]='C' ;
			estado1[1]='e';
		} 
		else { 
			PORTC = (1<<DDC0);
			estado1[0]= 'A';
			estado1[1]='b';
		}
		_delay_ms(100);

	// Puerta Principal 
		
		 if (PIND &(1<<1)) { 
			PORTC = (1<<DDC5);
			estado2[0]='C' ;
			estado2[1]='e';
			estado2[2]=' ';
			estado2[3]=' ';
		 } 
		else 
		 { 
			PORTC = (1<<DDC4);
			estado2[0]= 'A';
			estado2[1]='b';
			estado2[2]=' ';
			estado2[3]=' ';
		 } 
		_delay_ms(100);

	// Puerta Garaje 

		if (PIND &(1<<2)) 
		 { 
			PORTC = (1<<DDC3);
			estado3[0]='C' ;
			estado3[1]='e';
			estado3[2]=' ';
			estado3[3]=' ';
		} 
		else 
		 { 
			PORTC = (1<<DDC2);
			estado3[0]= 'A';
			estado3[1]='b';
			estado3[2]=' ';
			estado3[3]=' ';
			estado3[4]=' ';
		 } 
		_delay_ms(100);
} 