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
	delay_init();	    	  //��ʱ������ʼ��	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
 	LED_Init();			      //LED�˿ڳ�ʼ��
	KEY_Init();           //��ʼ���밴�����ӵ�Ӳ���ӿ�
	EXTIX_Init();
	LED0 = 0;					    //�ȵ������
	while(1)
	{
		printf("OK\r\n");
	}	 
}
