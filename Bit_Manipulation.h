/*
--> Atmega16/Atmega32 Driver for Bit Manipulation
--> Author: Mohamed Hassan Fola

		   -----
1	PB0	 -|		|-	PA0	 40
2	PB1	 -|		|-	PA1	 39
3	PB2	 -|		|-	PA2	 38
4	PB3	 -|		|-	PA3	 37
5   PB4	 -|		|-	PA4	 36
6 	PB5  -|		|-	PA5	 35
7   PB6  -|		|-	PA6	 34
8 	PB7  -|		|-	PA7	 33
9		 -|		|-		 32
10		 -|		|-		 31
11		 -|		|-	     30
12		 -|		|-	PC7	 29
13		 -|		|-	PC6	 28
14	PD0	 -|		|-	PC5	 27
15	PD1	 -|		|-	PC4	 26
16	PD2	 -|		|-	PC3	 25
17	PD3	 -|		|-	PC2	 24
18	PD4	 -|		|-	PC1	 23
19	PD5	 -|		|-	PC0	 22
20	PD6	 -|		|-  PD7  21
		   -----	       
*/

#ifndef _BIT_MANIPULATION_H_
#define _BIT_MANIPULATION_H_

#define MASK(Bit)                                        (1<<(Bit))

#define DIGITAL_SET_MODE                                  1
#define DIGITAL_CLEAR_MODE                                0


#define SET_BIT(Register, Bit)                           ((Register) |= MASK(Bit))
#define CLEAR_BIT(Register, Bit)                         ((Register) &= ~MASK(Bit))
#define TOGGLE_BIT(Register, Bit)                        ((Register) ^= MASK(Bit))
#define READ_BIT(Register, Bit)                          (((Register)>>(Bit)) & 0x01)

#define DIGITAL_SET_OR_CLEAR(Register, Bit, Function)    (Register) = ((Register) | MASK(Bit)) & ~(((Function) == 0)<<(Bit))							    

#define IS_HIGH(Register, Bit)                           (((Register)>>(Bit)) & 0x01)
#define IS_LOW(Register, Bit)                           ~(((Register)>>(Bit)) & 0x01)

#define BitManipulationGetBits(Variable, Bits_Offest, Bits_Width) \
((Variable) >> (Bits_Offest)) & (((1 << (Bits_Width)) - 1))

#define BitManipulationSetBits(Variable, Bits_Offest, Bits_Width, Value) \
(((Variable) & ~(((1<<(Bits_Width)) - 1) << (Bits_Offest))) | (((Value) & ((1<<(Bits_Width)) - 1)) << (Bits_Offest)))


#endif /* _BIT_MANIPULATION_H_ */