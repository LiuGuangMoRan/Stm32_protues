#include "stm32f10x.h"                  // Device header
#include "LED.h"
#include "Key.h"
#include "Buzzer.h"
#include "radwai.h"


int main()
{
	Buzzer_Init();
  Radwai_Init();
	while(1)
	{
		if(Radwai_Get() == 1)
		{
			Buzzer_ON();
		}
		else
		{
			Buzzer_OFF();
		}
	}
}