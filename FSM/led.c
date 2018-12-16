#include "led.h"


void LedInit()
{
     SYSCTL->RCGCGPIO = 0x20; //0b100000 (enable PORT F only)
     GPIOF->DIR = 0xE; //0b00001110 (making pins PF1,2,3 outputs)
     GPIOF->DEN = 0xE; //Digital enabling pints PF1,2,3;
}

void LedSetGreen()
{	
    	GPIOF->DATA = 0x02;
}

void LedSetBlue()
{  
     	GPIOF->DATA = 0x04;
}

void LedSetRed()
{
		
        	GPIOF->DATA = 0x08;
}

void LedSetOff()
{
    	GPIOF->DATA &= ~0x02;
	    GPIOF->DATA &= ~0x04;
        GPIOF->DATA &= ~0x08;
}
