#include"main.h"
#include"sp_iic.h"
#include"as5600_driver.h"

void app_main(void)
{
    //串口初始化
    while(sp_uart_init()!=SP_OK)
    {
        vTaskDelay(pdMS_TO_TICKS(1000));
    }

    //IIC初始化
    while(sp_iic_init()!=SP_OK)
    {
        vTaskDelay(pdMS_TO_TICKS(1000));
    }

    while(1)
    {
        SP_LOG("ang=%f",as5600_read());
        vTaskDelay(pdMS_TO_TICKS(10));
    }
}
