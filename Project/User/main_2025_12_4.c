#include "stm32f10x.h"                  // Device header
#include "Delay.h"

int main(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_All;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitStructure);
	GPIO_SetBits(GPIOA, GPIO_Pin_All);

	while(1)
	{
	GPIO_ResetBits(GPIOA ,GPIO_Pin_0);
		Delay_ms(500);

	GPIO_SetBits(GPIOA ,GPIO_Pin_0);
		Delay_ms(500);
		
	GPIO_ResetBits(GPIOA ,GPIO_Pin_1);
		Delay_ms(500);

	GPIO_SetBits(GPIOA ,GPIO_Pin_1);
		Delay_ms(500);
		
	GPIO_ResetBits(GPIOA ,GPIO_Pin_2);
		Delay_ms(500);

	GPIO_SetBits(GPIOA ,GPIO_Pin_2);
		Delay_ms(500);
		
	GPIO_ResetBits(GPIOA ,GPIO_Pin_3);
		Delay_ms(500);

	GPIO_SetBits(GPIOA ,GPIO_Pin_3);
		Delay_ms(500);
		
	GPIO_ResetBits(GPIOA ,GPIO_Pin_4);
		Delay_ms(500);

	GPIO_SetBits(GPIOA ,GPIO_Pin_4);
		Delay_ms(500);
		
	GPIO_ResetBits(GPIOA ,GPIO_Pin_5);
		Delay_ms(500);

	GPIO_SetBits(GPIOA ,GPIO_Pin_5);
		Delay_ms(500);
		
	GPIO_ResetBits(GPIOA ,GPIO_Pin_6);
		Delay_ms(500);

	GPIO_SetBits(GPIOA ,GPIO_Pin_6);
		Delay_ms(500);
		
	GPIO_ResetBits(GPIOA ,GPIO_Pin_7);
		Delay_ms(500);

	GPIO_SetBits(GPIOA ,GPIO_Pin_7);
		Delay_ms(500);
	}
}


#include "stm32f10x.h"
#include "Delay.h"

int main(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);

	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1 | GPIO_Pin_2 | GPIO_Pin_3 |
		GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);

	GPIO_SetBits(GPIOA, GPIO_Pin_0 | GPIO_Pin_1 | GPIO_Pin_2 | GPIO_Pin_3 |
		GPIO_Pin_4 | GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7);

	while (1)
	{
		for (int i = 0; i < 8; i++)
		{
			GPIO_ResetBits(GPIOA, (1 << i));  // 点亮
			Delay_ms(1000);

			GPIO_SetBits(GPIOA, (1 << i));    // 熄灭
			Delay_ms(100);
		}
	}
}

#include "stm32f10x.h"
#include "Delay.h"

int main(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIO_InitStructure);

	while (1)
	{
		GPIO_ResetBits(GPIOB, GPIO_Pin_12);
		Delay_ms(1000);

		GPIO_SetBits(GPIOB, GPIO_Pin_12);
		Delay_ms(1000);
	}
}
