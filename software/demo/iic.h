#ifndef __IIC_H
#define __IIC_H

#include <stdint.h>
#include"../include/gpio_hxc.h"

/* 引脚定义 */
#define ATK_MS7620_IIC_SCL_GPIO_PIN             3
#define ATK_MS7620_IIC_SDA_GPIO_PIN             4

/* IO操作 */
#define IIC_SCL(x)                   do{ x ?                                                                                             \
                                            GPIO_Write( ATK_MS7620_IIC_SCL_GPIO_PIN, 1) :    \
                                            GPIO_Write( ATK_MS7620_IIC_SCL_GPIO_PIN, 0);   \
                                        }while(0)

#define IIC_SDA(x)                   do{ x ?                                                                                             \
                                            GPIO_Write( ATK_MS7620_IIC_SDA_GPIO_PIN, 1) :    \
                                            GPIO_Write( ATK_MS7620_IIC_SDA_GPIO_PIN, 0);   \
                                        }while(0)

#define ATK_MS7620_IIC_READ_SDA()               GPIO_Read( ATK_MS7620_IIC_SDA_GPIO_PIN);
#define IIC_SDA_IN()                            GPIO_Set(ATK_MS7620_IIC_SDA_GPIO_PIN,1)
#define IIC_SDA_OUT()                           GPIO_Set(ATK_MS7620_IIC_SDA_GPIO_PIN,0)

/* 操作函数 */
void iic_start(void);                /* 产生IIC起始信号 */
void iic_stop(void);                 /* 产生IIC停止信号 */
uint8_t iic_wait_ack(void);          /* 等待IIC应答信号 */
void iic_ack(void);                  /* 产生ACK应答信号 */
void iic_nack(void);                 /* 不产生ACK应答信号 */
void iic_send_byte(uint8_t dat);     /* IIC发送一个字节 */
uint8_t iic_read_byte(uint8_t ack);  /* IIC接收一个字节 */
void atk_ms7620_iic_init(void);                 /* 初始化IIC接口 */

#endif
