#include "stm32f10x.h"                  // Device header
#include "bps_led.h"
//void delay_ms(int n)//ÑÓÊ±º¯Êý
//{
//	int i;
//	while (n--)
//	{
//		for(i=0;i<1;i++);
//	}
//}



int main()
{
	while (1)
	{
		LED_G_GPIO_Config();
		led(off);
	}
}

