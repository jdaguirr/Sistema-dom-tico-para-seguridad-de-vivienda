#include "leds.h"

int main(){ 
	
	char estado1[3];
	char estado2[4];
	char estado3[4];
	LCD_Init ();
	LCD_Print("Ventana comedor");
	LCD_Action (0X94);
	LCD_Print ( "Puerta Entrada");
	LCD_Action(0XD4);
	LCD_Print ( "Puerta Garaje");
	
	while(1) { 

		encendido_leds(estado1, estado2, estado3);
		LCD_Action(0X90);
		LCD_Print(estado1);
		LCD_Action(0XA4);
		LCD_Print(estado2);
		LCD_Action(0XE4);
		LCD_Print (estado3);
}}
		/*if (PIND &(1<<0)) { 
			PORTC = 0b000001;//Activa el bit 0 del puerto D
			estado1[0]='C' ;
			estado1[1]='e';
			
		} 
		else { 
			PORTC = 0b000010;
			estado1[0]= 'A';
			estado1[1]='b';
			
		}
		
		_delay_ms(1000);
		LCD_Action(0X90);
		LCD_Print(estado1);

	// Puerta Principal 
		
		 if (PIND &(1<<1)) { 
			PORTC = 0b010000;
			estado2[0]='C' ;
			estado2[1]='e';
			estado2[2]=' ';
			estado2[3]=' ';
		 } 
		else 
		 { 
			PORTC = 0b100000;
			estado2[0]= 'A';
			estado2[1]='b';
			estado2[2]=' ';
			estado2[3]=' ';
		 } 
		_delay_ms(1000);


	// Puerta Garaje 

		if (PIND &(1<<2)) 
		 { 
			PORTC = 0b000100;
			estado3[0]='C' ;
			estado3[1]='e';
			estado3[2]=' ';
			estado3[3]=' ';
		} 
		else 
		 { 
			PORTC = 0b001000;
			estado3[0]= 'A';
			estado3[1]='b';
			estado3[2]=' ';
			estado3[3]=' ';
			estado3[4]=' ';
		 } 
		_delay_ms(1000);
		//LCD_Clear ();
		//LCD_Action(0X90);
		//LCD_Print(estado1);
		//LCD_Action(0XA4);
		//LCD_Print(estado2);

	} */
