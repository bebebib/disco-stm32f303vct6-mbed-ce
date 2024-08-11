# Discovery STM32F303VCT7 MBED CE Support

Adding support for this dev board to the MBED-CE project. Following instructions from the docs: https://github.com/mbed-ce/mbed-os/wiki/New-Project-Setup-Guide

I then also added the pin names and clocking for this dev board, in a similar manner to the STM32F303xB processor. 

There are still some apparent issues with this port (such as the use of RCC_PREDIV_DIV1 in system_clock.c) but this example is working on the eval kit.