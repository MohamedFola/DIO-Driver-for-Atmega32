/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : MCAL                      ************/
/************ Version : 2.00                      ************/
/************ SWC     : Digital input/output(DIO) ************/
/*************************************************************/
/*************************************************************/



#ifndef _DIO_REGISTERS_H_
#define _DIO_REGISTERS_H_

#define     OFFSET_PIN(i)      *((volatile u8*)(0x30+(3*i)))
#define     OFFSET_PORT(i)     *((volatile u8*)(0x32+(3*i)))

#define     PORTA              *((volatile u8*)0x3B)
#define     PINA               *((volatile u8*)0x39)

#define     PORTB              *((volatile u8*)0x38)
#define     PINB               *((volatile u8*)0x36)

#define     PORTC              *((volatile u8*)0x35)
#define     PINC               *((volatile u8*)0x33)

#define     PORTD              *((volatile u8*)0x32)
#define     PIND               *((volatile u8*)0x30)

#endif