// Include header Files
#include <reg52.h>
#include <stdio.h>

// Define Motor Conditions

#define lt 0x06;
#define rt 0x09;
#define st 0x0a;
#define stop 0x00;

unsigned int a;
void main()
{
	while(1)
	{
		a=P1&0x03;
		if (a==0x00)
		{
			P2=stop;
			P0=stop;
		}
		if(a==0x01)
		{
			P2=lt;
			P0=lt;
		}
		if(a==0x02)
		{
			P2=rt;
			P0=rt;
		}
		if(a=0x03)
		{
			P2=st;
			P0=st;
		}
		
	}
}
