/*
Title:			Main
Autor:			Frank Jonischkies
Umgebung:		WinAVR-20070122
*/ 

#include <inttypes.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>

#include "uart.h"

const char string1[] PROGMEM={" Byte\n\r"};

char j;
short int a;
int b;
long int c;
float g;
double h;
long double i;

int main(void)
{
	InitUART();
	sei();
	
	UartPutP(PSTR("\n\rSpeicherbedarf fuer GCC\n\r"));
	UartPutP(PSTR("-----------------------\n\r"));
	UartPutP(PSTR("      char   = ")); UartPutC(sizeof(j) + '0'); UartPutP(string1);
	UartPutP(PSTR("short int    = ")); UartPutC(sizeof(a) + '0'); UartPutP(string1);
	UartPutP(PSTR("      int    = ")); UartPutC(sizeof(b) + '0'); UartPutP(string1);
	UartPutP(PSTR("long  int    = ")); UartPutC(sizeof(c) + '0'); UartPutP(string1);
	UartPutP(PSTR("      float  = ")); UartPutC(sizeof(g) + '0'); UartPutP(string1);
	UartPutP(PSTR("      double = ")); UartPutC(sizeof(h) + '0'); UartPutP(string1);
	UartPutP(PSTR("long  double = ")); UartPutC(sizeof(i) + '0'); UartPutP(string1);

	for(;;) {
		;
	}

	return 0;
}
