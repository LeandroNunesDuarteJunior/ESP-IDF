#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "driver/gpio.h"
#include "buzzer/buzzer.hpp"

#define TAG "Buzzer"

extern "C" void app_main() {

    int delay = 100;
    int bips = 3;

    buzzer_init();
    buzzer_action(delay, bips);
    ESP_LOGW(TAG, "%d sinais com intervaloes de %d milisegundos", bips, delay);

}
