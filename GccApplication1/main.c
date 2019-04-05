/*
 * GccApplication1.c
 *
 * Created: 22/03/2019 08:36:57
 * Author : Adam Klima
 */ 

#include <stdio.h>
#include <stdio_driver.h>

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <ATMEGA_FreeRTOS.h>
#include "../FreeRTOSTraceDriver/FreeRTOSTraceDriver.h"




int main(void)
{
    stdioCreate(0);
	sei();
	
	puts("Program Started!");
	
	uint16_t counter = 0;
	
	
    while (1) 
    {
		printf(" The counter value: %05d and in hex> %04X\n", counter, counter);
		counter++;
		
		if(stdioInputWaiting())
		{
			printf("###>%c\n", getchar());
			
		}
		
		_delay_ms(500);

    }
}

