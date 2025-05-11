#include"as5600_driver.h"

//定义
#define DVE_ADDR 0x36
#define REG_ADDR 0x0c

//IIC读寄存器
static void iic_read_addr(uint8_t dev_addr,uint8_t reg_addr,uint8_t*data,uint8_t len);
//AS5600读取角度
float as5600_read();

//IIC读寄存器
static void iic_read_addr(uint8_t dev_addr,uint8_t reg_addr,uint8_t*data,uint8_t len)
{
    return;
}

//AS5600读取角度
float as5600_read()
{
    uint8_t data[2]={0};
    //IIC读寄存器
    iic_read_addr(DVE_ADDR,REG_ADDR,data,2);
    float angle=data[0]<<8|data[1];
    return angle*0.08789;//360/4096
}
