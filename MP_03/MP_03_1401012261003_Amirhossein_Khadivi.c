/*******************************************************
This program was created by the
CodeWizardAVR V3.14 Advanced
Automatic Program Generator
© Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 6/14/2026
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
    DDRB = 0xFF;    
    PORTB = 0x00;  

    DDRD = 0x00;   
    PORTD = 0xFF;   

    while(1)
    {
        if(PIND.0 == 0)
        {
            PORTB.0 = 1;
            while(PIND.0 == 0);
            PORTB.0 = 0;
        }

        if(PIND.1 == 0)
        {
            PORTB.1 = 1;
            while(PIND.1 == 0);
            PORTB.1 = 0;
        }

        if(PIND.2 == 0)
        {
            PORTB.2 = 1;
            while(PIND.2 == 0);
            PORTB.2 = 0;
        }

        if(PIND.3 == 0)
        {
            PORTB.3 = 1;
            while(PIND.3 == 0);
            PORTB.3 = 0;
        }

        if(PIND.4 == 0)
        {
            PORTB.4 = 1;
            while(PIND.4 == 0);
            PORTB.4 = 0;
        }

        if(PIND.5 == 0)
        {
            PORTB.5 = 1;
            while(PIND.5 == 0);
            PORTB.5 = 0;
        }

        if(PIND.6 == 0)
        {
            PORTB.6 = 1;
            while(PIND.6 == 0);
            PORTB.6 = 0;
        }

        if(PIND.7 == 0)
        {
            PORTB.7 =1;
            while(PIND.7 ==0);
            PORTB.7 =0;    
        }
    }
}