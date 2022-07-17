/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : MCAL                      ************/
/************ Version : 2.00                      ************/
/************ SWC     : Digital input/output(DIO) ************/
/*************************************************************/
/*************************************************************/

#include "STD_Types.h"
#include "DIO_Registers.h"
#include "Bit_Manipulation.h"
#include "DIO_Interface.h"


void DIO_u8SetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u8 Copy_u8Value)
{
	#ifdef DEBUG
		ASSERT(Copy_u8PortName  > DIO_u8MaxPort);
		ASSERT(Copy_u8PinNumber > DIO_u8MaxPin);
		ASSERT(Copy_u8Value     > DIO_u8PIN_VALUES);
	#endif
	DIGITAL_SET_OR_CLEAR(OFFSET_PORT(Copy_u8PortName), Copy_u8PinNumber, Copy_u8Value);
}

void DIO_u8SetPortValue(u8 Copy_u8PortName, u8 Copy_u8value)
{
	#ifdef DEBUG
		ASSERT(Copy_u8PortName > DIO_u8MaxPort);
	#endif
	OFFSET_PORT(Copy_u8PortName) = Copy_u8value;
}

void DIO_u8GetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u8* Copy_pu8Value)
{
	
	#ifdef DEBUG
		ASSERT(Copy_u8PortName > DIO_u8MaxPort);
		if(Copy_pu8Value == NULL) return;
	#endif
	
	(*Copy_pu8Value) = READ_BIT(OFFSET_PIN(Copy_u8PortName), Copy_u8PinNumber);
}