#pragma once

#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

    void buzzer_init();
    void buzzer_action(int delay, int bips);

