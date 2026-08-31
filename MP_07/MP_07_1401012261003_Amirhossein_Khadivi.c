/*******************************************************
This program was created by the
CodeWizardAVR V3.14 Advanced
Automatic Program Generator
© Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 6/15/2026
Author  : 
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
    DDRD = 0xFF;

    while(1)
    {
        
        PORTB = 0b01111110;   
        PORTD = 0b10000001;
        delay_ms(10);
        
        
        PORTB = 0b10111101;  
        PORTD = 0b01000010;
        delay_ms(10);    
        
        
        PORTB = 0b11011011;
        PORTD = 0b00100100;
        delay_ms(10);
        
        
        PORTB = 0b11100111;
        PORTD = 0b00011000;
        delay_ms(10);
    }
}
