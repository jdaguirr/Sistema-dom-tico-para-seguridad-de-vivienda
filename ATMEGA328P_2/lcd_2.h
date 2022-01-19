#include <inttypes.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/sleep.h>
#include <util/delay.h>
#define LCD_Port PORTB
#define LCD_BPin DDRB
#define RSPIN PB0
#define ENPIN PB1
#include <math.h>

void LCD_Action(unsigned char cmnd);
void LCD_Init(void);
void LCD_Print(char *str);