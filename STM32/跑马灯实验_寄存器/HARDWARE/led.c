#include "led.h"
#include "stm32f10x.h"

void LED_Init(void)
{
	RCC->APB2ENR |= 1<<3;      //ʹ��IO��ʱ�ӣ�GPIOB
	RCC->APB2ENR |= 1<<6;      //ʹ��IO��ʱ��, GPIOE
	
	
	//GPIOB.5
	GPIOB->CRL &= 0xFF0FFFFF;  //���������㽫���޸ĵ�λ�޸�Ϊ0���޸ĵ���λ��
	GPIOB->CRL |= 0x00300000;	 //���û����㽫PB5�޸�Ϊͨ�������������0011��Ҳ����3
	GPIOB->ODR |= 1<<5;        //��PB5��ODR�Ĵ�������Ϊ�ߵ�ƽ�����ʼ����
	
	//GPIOE.5
	GPIOE->CRL &= 0xFF0FFFFF;  //ͬ��
	GPIOE->CRL |= 0x00300000;	
	GPIOE->ODR |= 1<<5;
	
}

