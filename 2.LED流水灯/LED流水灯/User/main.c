#include "stm32f10x.h"                  // Device header
#include "Delay.h"

int main(void)
{
	
	//1.使用RCC开启GPIO时钟（RCC是复位和时钟控制外设）	
	RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOA,ENABLE);
	//2.使 用GPIO_Init函数初始化GPIO
	GPIO_InitTypeDef GPIO_InitStructture;
	GPIO_InitStructture.GPIO_Mode = GPIO_Mode_Out_PP;
	
	//设置多个引脚：按位或的方式(因为GIPO的端口是32位寄存器)
	GPIO_InitStructture.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1 | GPIO_Pin_2 | GPIO_Pin_3 | GPIO_Pin_4;
	GPIO_InitStructture.GPIO_Speed =GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitStructture);
	//3.使用输出或者输入的函数控制GPIO口

	while(1)
	{
		GPIO_Write(GPIOA , ~0x0001);
		Delay_ms(5000);
		GPIO_Write(GPIOA , ~0x0002);
		Delay_ms(5000);
		GPIO_Write(GPIOA , ~0x0004);
		Delay_ms(5000);
		GPIO_Write(GPIOA , ~0x0008);
		Delay_ms(5000);
		GPIO_Write(GPIOA , ~0x0010);
		Delay_ms(5000);
	}
}