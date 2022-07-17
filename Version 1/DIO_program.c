/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : MCAL                      ************/
/************ Version : 1.00                      ************/
/************ SWC     : Digital input/output(DIO) ************/
/*************************************************************/
/*************************************************************/

#include "DIO_register.h"

#include "STD_Types.h"
#include "Bit_Manipulation.h"


#include "DIO_interface.h"
#include "DIO_private.h"
#include "DIO_config.h"


u8 DIO_u8SetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u8 Copy_u8Value)
{
	if (Copy_u8Value == DIO_u8PIN_HIGH)
	{
		switch(Copy_u8PortName)
		{
			case DIO_u8PORTA:   SET_BIT(PORTA, Copy_u8PinNumber);    break;
			case DIO_u8PORTB:   SET_BIT(PORTB, Copy_u8PinNumber);    break;
			case DIO_u8PORTC:   SET_BIT(PORTC, Copy_u8PinNumber);    break;
			case DIO_u8PORTD:   SET_BIT(PORTD, Copy_u8PinNumber);    break;
			default:  return 1;
		}
	}
	else
	{
		switch(Copy_u8PortName)
		{
			case DIO_u8PORTA:   CLEAR_BIT(PORTA, Copy_u8PinNumber);  break;
			case DIO_u8PORTB:   CLEAR_BIT(PORTB, Copy_u8PinNumber);  break;
			case DIO_u8PORTC:   CLEAR_BIT(PORTC, Copy_u8PinNumber);  break;
			case DIO_u8PORTD:   CLEAR_BIT(PORTD, Copy_u8PinNumber);  break;
			default:  return 1;
		}
	}
	
	return 0;
}

u8 DIO_u8SetPortValue(u8 Copy_u8PortName, u8 Copy_u8Value)
{
	switch(Copy_u8PortName)
		{
			case DIO_u8PORTA:   PORTA = Copy_u8Value; break;
			case DIO_u8PORTB:   PORTB = Copy_u8Value; break;
			case DIO_u8PORTC:   PORTC = Copy_u8Value; break;
			case DIO_u8PORTD:   PORTD = Copy_u8Value; break;
			default:  return 1;	
		}
	
	return 0;
}

u8 DIO_u8GetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u8* Copy_pu8Value)
{
	if(Copy_pu8Value == NULL) return 0;
	
	
	switch(Copy_u8PortName)
	{
		case DIO_u8PORTA:   (*Copy_pu8Value) = READ_BIT(PINA, Copy_u8PinNumber); break;
		case DIO_u8PORTB:   (*Copy_pu8Value) = READ_BIT(PINB, Copy_u8PinNumber); break;
		case DIO_u8PORTC:   (*Copy_pu8Value) = READ_BIT(PINC, Copy_u8PinNumber); break;
		case DIO_u8PORTD:   (*Copy_pu8Value) = READ_BIT(PIND, Copy_u8PinNumber); break;
		default:  return 1;
	}
	
	return 0;
}
