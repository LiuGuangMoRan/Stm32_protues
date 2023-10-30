#include "stm32f10x.h"                  // Device header
#include "Delay.h"

int main(void)
{
	
	//1.使用RCC开启GPIO时钟（RCC是复位和时钟控制外设）	
	RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOB,ENABLE);
	//2.使用GPIO_Init函数初始化GPIO
	GPIO_InitTypeDef GPIO_InitStructture;
	GPIO_InitStructture.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructture.GPIO_Pin = GPIO_Pin_12;
	GPIO_InitStructture.GPIO_Speed =GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_InitStructture);
	//3.使用输出或者输入的函数控制GPIO口
		
	while(1)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_12);
		Delay_ms(100);
		GPIO_SetBits(GPIOB,GPIO_Pin_12);
		Delay_ms(100);
		Delay_ms(1(GPIOB,GPIO_Pin_12);
		Delay_ms(100);  000);
		GPIO_ResetBits
		GPIO_SetBits(GPIOB,GPIO_Pin_12);
		Delay_ms(700);
	}
}