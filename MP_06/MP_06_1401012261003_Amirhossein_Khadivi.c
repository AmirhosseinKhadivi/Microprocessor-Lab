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
    DDRD = 0xFF;

    PORTB = 0x00;
    PORTD = 0x00;

    while(1)
    {
        PORTB = 0x40;    
        delay_ms(10);

        PORTD = 0x01;
        delay_ms(10);

        PORTD = 0x04;
        delay_ms(10);

        PORTD = 0x10;
        delay_ms(10);
    }
}
/*    // show: 0
        PORTB = 0x01;
        delay_ms(10);
        PORTB = 0x02;
        delay_ms(10);
        PORTB = 0x04;
        delay_ms(10);
        PORTB = 0x08;
        delay_ms(10);
        PORTB = 0x10;
        delay_ms(10);
        PORTB = 0x20;
        delay_ms(10);
*/

/*    // show: all segements :)  
        PORTB = 0x01;
        PORTD = 0x00;
        delay_ms(700);

        PORTB = 0x02;
        PORTD = 0x00;
        delay_ms(700);

        PORTB = 0x04;
        PORTD = 0x00;
        delay_ms(700);

        PORTB = 0x08;
        PORTD = 0x00;
        delay_ms(700);

        PORTB = 0x10;
        PORTD = 0x00;
        delay_ms(700);

        PORTB = 0x20;
        PORTD = 0x00;
        delay_ms(700);

        PORTB = 0x40;    7
        PORTD = 0x00;
        delay_ms(700);

        PORTB = 0x80;
        PORTD = 0x00;
        delay_ms(700);

        PORTB = 0x00;    9
        PORTD = 0x01;
        delay_ms(700);

        PORTB = 0x00;
        PORTD = 0x02;
        delay_ms(700);

        PORTB = 0x00;    11
        PORTD = 0x04;
        delay_ms(700);

        PORTB = 0x00;
        PORTD = 0x08;
        delay_ms(700);

        PORTB = 0x00;     13
        PORTD = 0x10;
        delay_ms(700);

        PORTB = 0x00;
        PORTD = 0x20;
        delay_ms(700);

        PORTB = 0x00;
        PORTD = 0x40;
        delay_ms(700);

        PORTB = 0x00;
        PORTD = 0x80;
        delay_ms(700);
*/