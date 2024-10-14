/*
 * main.c
 *
 *  Created on: Oct 14, 2024
 *      Author: youssef sami elbhiry
 */
#include "STD_types.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"

#include "LED_interface.h"

#include "SW_interface.h"

 void main()
 {  LED_Type led1={LED_PORTA,LED_PIN0,ACTIVE_HIGH};
 SW_t switch1 ={DIO_PORTC,DIO_PIN0,SW_INT_PULL_UP};
 LED_voidInit(led1);
 SW_voidInit(switch1);

 while(1)
 {
	 if(SW_u8ReadSwitch(switch1)==SW_PRESED)
	 {
		 LED_voidLedOn(led1);
	 }
	 else
	 {
		 LED_voidLedOf(led1);
	 }



 }

 }

