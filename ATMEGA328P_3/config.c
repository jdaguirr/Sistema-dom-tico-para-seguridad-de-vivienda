#include "config.h"

void configuracion(){
	DDRB  |= ((0<<DDB1));
	DDRB  |= ((0<<DDB2));
	DDRB  |= ((0<<DDB3));
	DDRB  |= ((0<<DDB4));
	DDRB  |= ((1<<DDB5));
	DDRB  |= ((1<<DDB6));
	DDRB  |= ((1<<DDB7));
}
