#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>

void LCD_Init(void);
void LCD_Action(unsigned char cmnd);
void LCD_Clear();
void LCD_Print(char *str);
void LCD_Printpos(char row, char pos, char *str);
void ejecutar_keypadLCD();
void inicializar_keypadLCD();
