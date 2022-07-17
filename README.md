# DIO-Driver-for-Atmega32
This driver includes implementation of functions you need to use for Digital Input Output pins for Atmega32

- You will find Two versions for the driver both have the same functions with the same function arguments but with different implementation for the functions
- including -STD_Types.h- file and -Bit_Manipulation.h- file is " MUST " in order for the driver to work properly 
- At interface file you will find macros to use them as function parameters 
- This driver Doesn't include any functions for controlling the direction of the pin but only functions for controlling the value and reading form the pin
- Setting the direction of the pins is can be done using PORT_Driver
