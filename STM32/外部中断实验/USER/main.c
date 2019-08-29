#include "stm32f10x.h"
#include "led.h"
#include "beep.h"
#include "key.h"
#include "sys.h"
#include "delay.h"
#include "exti.h"
#include "usart.h"

int main()
{
	delay_init();	    	  //延时函数初始化	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
 	LED_Init();			      //LED端口初始化
	KEY_Init();           //初始化与按键连接的硬件接口
	EXTIX_Init();
	LED0 = 0;					    //先点亮红灯
	while(1)
	{
		printf("OK\r\n");
	}	 
}
