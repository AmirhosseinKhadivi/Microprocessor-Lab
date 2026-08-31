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

void main(void)
{
    DDRB.0 = 1;
    DDRB.1 = 1;
    DDRB.2 = 1;
    DDRB.3 = 1;

    while(1)
    {
        PORTB.0=1;
        PORTB.1=0;
        PORTB.2=0;
        PORTB.3=0;
        delay_ms(1000);        
        
        PORTB.0=0;
        PORTB.1=1;
        PORTB.2=0;
        PORTB.3=0;
        delay_ms(1000);
        
        PORTB.0=0;
        PORTB.1=0;
        PORTB.2=1;
        PORTB.3=0;
        delay_ms(1000);
        
        PORTB.0=0;
        PORTB.1=0;
        PORTB.2=0;
        PORTB.3=1;
        delay_ms(1000);
    }
}
