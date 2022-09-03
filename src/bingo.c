#include <pic14/pic12f675.h>

void delay(unsigned int time);

// Main funct
void main(void)
{
	TRISIO = 0x00;       // Set all output
	GPIO   = 0x00;       // Make all pins 0

	TRISIO5 = 1;		 // Make GP5 as input
	unsigned int time = 100;
	unsigned int random = 0x00;
	while(1)
	{	random += 0x01;	// keep =+ 1
		if(GP5){	// if read GP5 in as 1
			GP0 = 0x01;	
			delay(random);
			GP0 = 0x00;
		}
	}
}
// delay func
void delay (unsigned int time ){
	unsigned int i ;
	unsigned int j ;
	for( i =0; i <time ; i ++)
	for( j =0; j <1275; j ++ );
}