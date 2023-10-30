#include "stm32f10x.h"                  // Device header
#include "Delay.h"

int main(void)
{
	
	//1.使用RCC开启GPIO时钟（RCC是复位和时钟控制外设）	
	RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOA,ENABLE);
	//2.使用GPIO_Init函数初始化GPIO
	GPIO_InitTypeDef GPIO_InitStructture;
	GPIO_InitStructture.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructture.GPIO_Pin = GPIO_Pin_0;
	GPIO_InitStructture.GPIO_Speed =GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitStructture);
	//3.使用输出或者输入的函数控制GPIO口
	
	//项目1-点亮一个LED
 	GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_RESET);
		
	while(1)
	{
	//项目2-LED闪烁
//	GPIO_ResetBits(GPIOA,GPIO_Pin_0);
//	Delay_ms(500);	
//	GPIO_ResetBits(GPIOA,GPIO_Pin_0);
//	Delay_ms(500);	
//		
//	GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_RESET);
//	Delay_ms(500);
//	GPIO_WriteBit(GPIOA,GPIO_Pin_0,Bit_SET);
//	Delay_ms(500);	
//		
//	GPIO_WriteBit(GPIOA,GPIO_Pin_0,(BitAction)0);
//	Delay_ms(500);
//	GPIO_WriteBit(GPIOA,GPIO_Pin_0,(BitAction)1);
//	Delay_ms(500);	
	}
}