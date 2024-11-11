#include"gpio_hxc.h"
/*
void GPIO_Set(uint32_t pin,uint32_t value)
{
    if(value)
	GPIO_CR |= (1<<pin);
	else
	GPIO_CR &=  ~(1<<pin);
}
*/
void GPIO_Write(uint32_t pin,uint32_t value)
{
    if(value)
	GPIO_ODR |= (1<<pin);
	else
	GPIO_ODR &=  ~(1<<pin);
}
uint32_t GPIO_Read(uint32_t pin)
{
	return GPIO_IDR&(1<<pin);
}                                          
