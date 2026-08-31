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

#asm
.equ __lcd_port=0x15; // PORTC
#endasm

#include <lcd.h>

int i;

void main(void)
{
    DDRC = 0xFF;
    PORTC = 0x00;

    lcd_init(16);
    lcd_clear();

    while(1)
    {
        for(i = 0; i <= 6; i++)
        {
            lcd_clear();

            lcd_gotoxy(i,0);
            lcd_putsf("Guilan");

            lcd_gotoxy(i,1);
            lcd_putsf("University");

            delay_ms(300);
        }

        for(i = 6; i >= 0; i--)
        {
            lcd_clear();

            lcd_gotoxy(i,0);
            lcd_putsf("Guilan");

            lcd_gotoxy(i,1);
            lcd_putsf("University");

            delay_ms(300);
        }
    }
}