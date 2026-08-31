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
    DDRC=0xFF;
    DDRD=0x0F; 
    
    PORTC = 0x00;
    PORTD = 0x00;
    
    while(1)
    {  
       // PORTD = 0x00;
        PORTD = 0x01; // COM1
        //PORTC=0b01111101; // num=6 
        PORTC=0b10000010; // num=6
        delay_ms(10);
                    
        // PORTD = 0x00;
        PORTD = 0x02; // COM2
        //PORTC=0b00000111; // num=7
        PORTC=0b11111000; // num=7
        delay_ms(10);  
                     
        // PORTD = 0x00;          
        PORTD = 0x04; // COM3
        //PORTC=0b01111111; // num=8
        PORTC=0b10000000; // num=8
        delay_ms(10); 
        
        // PORTD = 0x00; 
        PORTD = 0x08; // COM4
        //PORTC=0b01101101; // num=5
        PORTC=0b10010010; // num=5
        delay_ms(10);
    }
}
// 0b00111111 --> 0
// 0b00000110 --> 1
// 0b01011011 --> 2

// 0b01100110 --> 4
// 0b01101101--> 5
// 0b01111101--> 6
// 0b00000111--> 7
// 0b01111111 --> 8