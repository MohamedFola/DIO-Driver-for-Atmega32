/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : MCAL                      ************/
/************ Version : 2.00                      ************/
/************ SWC     : Digital input/output(DIO) ************/
/*************************************************************/
/*************************************************************/


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_


#define DIO_u8PIN_HIGH        1
#define DIO_u8PIN_LOW         0
#define DIO_u8PIN_VALUES      1

#define DIO_u8PORT_HIGH       0xFF
#define DIO_u8PORT_LOW        0x00


#define DIO_u8PORTA           3
#define DIO_u8PORTB           2
#define DIO_u8PORTC           1
#define DIO_u8PORTD           0
#define DIO_u8MaxPort         3

			  
#define DIO_u8PIN0            0
#define DIO_u8PIN1            1
#define DIO_u8PIN2            2
#define DIO_u8PIN3            3
#define DIO_u8PIN4            4
#define DIO_u8PIN5            5
#define DIO_u8PIN6            6
#define DIO_u8PIN7            7
#define DIO_u8MaxPin          7


#define ASSERT(Condition)     while((Condition) == 1)


void DIO_u8SetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u8 Copy_u8Value);

void DIO_u8SetPortValue(u8 Copy_u8PortName, u8 Copy_u8value);

void DIO_u8GetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u8* Copy_pu8Value);



#endif