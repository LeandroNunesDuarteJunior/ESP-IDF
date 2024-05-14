#include "buzzer/buzzer.hpp"

#define BUZZER_GPIO GPIO_NUM_17

    void buzzer_init(){

        esp_rom_gpio_pad_select_gpio(BUZZER_GPIO);
        gpio_set_direction(BUZZER_GPIO, GPIO_MODE_OUTPUT);
    }

    void buzzer_action(int delay, int bips){

        for(int i=0; i<bips; i++){
            // Ligar o buzzer
            gpio_set_level(BUZZER_GPIO, 1);
            vTaskDelay(delay / portTICK_PERIOD_MS); // Espera

            // Desligar o buzzer
            gpio_set_level(BUZZER_GPIO, 0);
            vTaskDelay(delay / portTICK_PERIOD_MS); // Espera
        }
    }