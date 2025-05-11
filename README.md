# as5600_driver
随手写的AS5600驱动，很简单，0.087度的精度非常舒适。
请自行移植iic读取设备地址的驱动函数，已在espidf环境下测试功能正常。
esp_as5600为ESPS3IDF环境下的移植例程，里面顺便封装好了基于ESP32IDFIICAPI的读写寄存器函数接口。

![image](https://github.com/user-attachments/assets/eed2e79b-8f37-4d22-96b3-db361a69431a)
