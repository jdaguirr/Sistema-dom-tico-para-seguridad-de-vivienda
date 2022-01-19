#include "lcd_2.h"

void LCD_Init(void){
	DDRD  |= ((0<<DDD0));
	DDRD  |= ((0<<DDD1));
	DDRD  |= ((0<<DDD2));
	DDRC = 0b111111;
	LCD_BPin = 0xFF;
	_delay_ms(15);
	LCD_Action(0x02);
	LCD_Action(0x28);
	LCD_Action(0x0c);
	LCD_Action(0x06);
	_delay_ms(2);
}

void LCD_Action(unsigned char cmnd){
	LCD_Port = (LCD_Port & 0x0F) | (cmnd & 0xF0); //11110000 OR
	LCD_Port &= ~(1<<RSPIN);
	LCD_Port |= (1<<ENPIN);
	_delay_us(1);
	LCD_Port &= ~(1<<ENPIN);
	_delay_us(200);
	LCD_Port = (LCD_Port & 0x0F) | (cmnd << 4);
	LCD_Port |= (1<<ENPIN);
	_delay_us(1);
	LCD_Port &= ~(1<<ENPIN);
	_delay_ms(2);
}

void LCD_Print(char *str){
	int i;
	for(i=0; str[i]!=0; i++){
		LCD_Port = (LCD_Port & 0x0F) | (str[i] & 0xF0); //11110000 OR
		LCD_Port |= (1<<RSPIN);
		LCD_Port |= (1<<ENPIN);
		_delay_us(1);
		LCD_Port &= ~(1<<ENPIN);
		_delay_us(200);
		LCD_Port = (LCD_Port & 0x0F) | (str[i] << 4);
		LCD_Port |= (1<<ENPIN);
		_delay_us(1);
		LCD_Port &= ~(1<<ENPIN);
		_delay_ms(2);
	}
}
