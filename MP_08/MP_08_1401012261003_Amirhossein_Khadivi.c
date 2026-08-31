/*******************************************************
This program was created by the
CodeWizardAVR V3.14 Advanced
Automatic Program Generator
© Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 6/15/2026
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
#include <stdio.h>
#include <delay.h>

#asm
    .equ __lcd_port=0x15
#endasm

#include <lcd.h>

unsigned char h = 23, m = 59, s = 0;
char t[16];

void main(void)
{
    MCUCSR |= (1<<JTD);
    MCUCSR |= (1<<JTD);

    lcd_init(16);
    lcd_clear();

    while(1)
    {
        lcd_gotoxy(0,0);
        sprintf(t,"%02d:%02d:%02d",h,m,s);
        lcd_puts(t);

        delay_ms(500);

        s++;

        if(s > 59)
        {
            s = 0;
            m++;

            if(m > 59)
            {
                m = 0;
                h++;

                if(h > 23)
                {
                    h = 0;
                }
            }
        }
    }
}


/*
#include <mega16.h>
#include <stdio.h>
#include <delay.h>
#asm
.equ __lcd_port = 0x18; // PORTB
#endasm
#include <lcd.h>

char h=0, m=0, s=0, t[16];

void main (void)
{
    DDRB = 0xFF;
    PORTB = 0x00;
    lcd_init(16);
    lcd_clear(); 
    while(1)
    {
        lcd_gotoxy(0,0);     // First row, first column
        sprintf(t,"%2d:%2d:%2d",h,m,s);
        lcd_puts(t);
        delay_ms(1000);
        s = s + 1;
        if(s > 59)
        {
            s = 0;
            m = m + 1;
            if(m > 59)
            {
                m = 0;
                h = h + 1;
                if(h > 23)
                {
                    h = 0;
                }

            }
        } 
    }
}
*/