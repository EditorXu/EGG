
#include "joypad.h"

void JOYPAD_Delay(uint32_t t)
{
	while(t--);
}
/*
void JOYPAD_Init(void)
{
	GPIO_Set(0,0);	//时钟线
	GPIO_Set(1,0);	//发送线
	GPIO_Set(2,1);	//接收线
}
*/
uint8_t JOYPAD_Read(void)
{
	volatile uint8_t temp=0;
 	int t;
	JOYPAD_LAT_HIGH;	
 	JOYPAD_Delay(80);
	JOYPAD_LAT_LOW; 
	for(t=0;t<8;t++)
	{
		temp>>=1;	 
		if(JOYPAD_DAT_READ == 0)temp|=0x80;
		JOYPAD_CLK_HIGH;			   
		JOYPAD_Delay(80);
		JOYPAD_CLK_LOW;	
		JOYPAD_Delay(80); 
	}
	return temp;
}
