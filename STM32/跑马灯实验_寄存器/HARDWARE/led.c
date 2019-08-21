#include "led.h"
#include "stm32f10x.h"

void LED_Init(void)
{
	RCC->APB2ENR |= 1<<3;      //使能IO口时钟，GPIOB
	RCC->APB2ENR |= 1<<6;      //使能IO口时钟, GPIOE
	
	
	//GPIOB.5
	GPIOB->CRL &= 0xFF0FFFFF;  //先用与运算将欲修改的位修改为0（修改第六位）
	GPIOB->CRL |= 0x00300000;	 //再用或运算将PB5修改为通用推挽输出，即0011，也就是3
	GPIOB->ODR |= 1<<5;        //将PB5的ODR寄存器设置为高电平，即最开始不亮
	
	//GPIOE.5
	GPIOE->CRL &= 0xFF0FFFFF;  //同理
	GPIOE->CRL |= 0x00300000;	
	GPIOE->ODR |= 1<<5;
	
}

