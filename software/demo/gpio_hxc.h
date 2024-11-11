#ifndef _GPIO_HXC_H_
#define _GPIO_HXC_H_

#include"stdint.h"

#define GPIO_BASE   0xf0000800
#define GPIO_IDR    *(unsigned int*)(GPIO_BASE)
#define GPIO_ODR    *(unsigned int*)(GPIO_BASE+0x04)
void GPIO_Set(uint32_t pin,uint32_t value);
void GPIO_Write(uint32_t pin,uint32_t value);
uint32_t GPIO_Read(uint32_t pin);
#endif
