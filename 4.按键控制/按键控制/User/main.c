#include "stm32f10x.h"                  // Device header
#include "LED.h"
#include "Key.h"

uint8_t KeyNum ;

int main()
{
	LED_Init();
	Key_Init();
	while(1)
	{
		KeyNum = Key_GetNum();
		
		if(KeyNum == 1)
		{
			LED1_ON();
			LED1_Turn();
		}
		if(KeyNum == 2)
		{
			LED2_Turn();
		}
	
	}
}