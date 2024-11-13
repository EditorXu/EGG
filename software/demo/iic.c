
#include "./include/iic.h"

/**
 * @brief       IIC接口延时函数，用于控制IIC读写速度
 * @param       无
 * @retval      无
 */
static inline void iic_delay(void)
{
    delay_us(2);
}

/**
 * @brief       产生IIC起始信号
 * @param       无
 * @retval      无
 */
void iic_start(void)
{
    IIC_SDA_OUT();

    IIC_SDA(1);
    IIC_SCL(1);
    iic_delay();
    IIC_SDA(0);
    iic_delay();
    IIC_SCL(0);
    iic_delay();
}

/**
 * @brief       产生IIC停止信号
 * @param       无
 * @retval      无
 */
void iic_stop(void)
{
    IIC_SDA_OUT();

    IIC_SDA(0);
    IIC_SCL(1);
    iic_delay();
    IIC_SDA(1);
    IIC_SCL(1);
    iic_delay();
}

/**
 * @brief       等待IIC应答信号
 * @param       无
 * @retval      0: 应答信号接收成功
 *              1: 应答信号接收失败
 */
uint8_t iic_wait_ack(void)
{
    uint8_t waittime = 0;
    uint8_t rack = 0;
    IIC_SDA_IN();
    
    IIC_SDA(1);
    iic_delay();
    IIC_SCL(1);
    iic_delay();
    
    while (IIC_READ_SDA())
    {
        waittime++;
        
        if (waittime > 250)
        {
            iic_stop();
            rack = 1;
            break;
        }
    }
    
    IIC_SCL(0);
    iic_delay();
    
    return rack;
}

/**
 * @brief       产生ACK应答信号
 * @param       无
 * @retval      无
 */
void iic_ack(void)
{
    IIC_SDA_OUT();

    IIC_SDA(0);
    iic_delay();
    IIC_SCL(1);
    iic_delay();
    IIC_SCL(0);
    iic_delay();
    IIC_SDA(1);
    iic_delay();
}

/**
 * @brief       不产生ACK应答信号
 * @param       无
 * @retval      无
 */
void iic_nack(void)
{
    IIC_SDA_OUT();

    IIC_SDA(1);
    iic_delay();
    IIC_SCL(1);
    iic_delay();
    IIC_SCL(0);
    iic_delay();
}

/**
 * @brief       IIC发送一个字节
 * @param       dat: 要发送的数据
 * @retval      无
 */
void iic_send_byte(uint8_t dat)
{
    uint8_t t;
    IIC_SDA_OUT();

    for (t=0; t<8; t++)
    {
        IIC_SDA((dat & 0x80) >> 7);
        iic_delay();
        IIC_SCL(1);
        iic_delay();
        IIC_SCL(0);
        dat <<= 1;
    }
    IIC_SDA(1);
}

/**
 * @brief       IIC接收一个字节
 * @param       ack: ack=1时，发送ack; ack=0时，发送nack
 * @retval      接收到的数据
 */
uint8_t iic_read_byte(uint8_t ack)
{
    uint8_t i;
    uint8_t dat = 0;
    IIC_SDA_IN();
    
    for (i = 0; i < 8; i++ )
    {
        dat <<= 1;
        IIC_SCL(1);
        iic_delay();
        
        if (IIC_READ_SDA())
        {
            dat++;
        }
        
        IIC_SCL(0);
        iic_delay();
    }
    
    if (ack == 0)
    {
        iic_nack();
    }
    else
    {
        iic_ack();
    }

    return dat;
}

/**
 * @brief       初始化IIC接口
 * @param       无
 * @retval      无
 */
void atk_ms7620_iic_init(void)
{
    
    /* 初始化SCL引脚 */
    GPIO_Set(ATK_MS7620_IIC_SCL_GPIO_PIN ,0);
    GPIO_Write(ATK_MS7620_IIC_SCL_GPIO_PIN ,0);
    
    /* 初始化SDA引脚 */
    GPIO_Set(ATK_MS7620_IIC_SDA_GPIO_PIN ,0);
    GPIO_Write(ATK_MS7620_IIC_SDA_GPIO_PIN ,0);
    
    iic_stop();
}
