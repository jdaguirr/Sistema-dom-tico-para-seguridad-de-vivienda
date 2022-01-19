#include "funcion.h"

void simulacion_presencia(void){
	while (PINB &(1<<1) ) { //SSP
		if (PINB &(1<<3)) { //Sensores 1 y 2
			PORTB = 0b01100000;//Activa el Rele y el Avisador de intruso
			if (PINB &(1<<2)) { //Accionador de alarma
				PORTB = 0b11100000;//Activa la alarma 
				_delay_ms(1000);
			}
			else{PORTB = 0b01100000;}
		} 
		else{ 
			//_delay_ms(6000); //Retardo
			PORTB = 0b00000000;//Desactiva el Rele, Desactiva el Avisador de intruso y Desactiva la alarma
		}}
}