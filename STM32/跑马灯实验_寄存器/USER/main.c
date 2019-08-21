#include "stm32f10x.h"
#include "led.h"
#include "delay.h"

int main()
{
	LED_Init();
	delay_init();
	
	
	GPIOB->ODR |= 1<<5; 
	GPIOE->ODR |= 1<<5; 
	delay_ms(500);
	
	GPIOB->ODR = ~(1<<5);
	GPIOE->ODR = ~(1<<5);
	delay_ms(500);

}

