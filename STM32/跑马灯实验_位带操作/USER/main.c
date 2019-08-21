#include "stm32f10x.h"
#include "led.h"
#include "delay.h"

int main()
{
	LED_Init();
	delay_init();
	
	
	while(1){
		LED0 = 1;
		LED1 = 1;
		delay_ms(500);
		
		LED0 = 0;
		LED1 = 0;
		delay_ms(500);			
	}
}
