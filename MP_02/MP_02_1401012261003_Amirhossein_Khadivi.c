/*******************************************************
This program was created by the
CodeWizardAVR V3.14 Advanced
Automatic Program Generator
© Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 6/13/2026
Author  : Amirhossein Khadivi
Company : 
Comments: 


Chip type               : ATmega16
Program type            : Application
AVR Core Clock frequency: 4.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 256
*******************************************************/
#include <mega16.h>
#include <delay.h>
int i;
//char code[15]={0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B,
//0x0C, 0x0D, 0x0E, 0x0F};
void main(void)
{
    DDRB = 0xff;
    PORTB = 0x00;
    while(1)
    {
        for(i=0;i<256;i++)
        {
            PORTB = i;
            delay_ms(50);
        }
    }
}
