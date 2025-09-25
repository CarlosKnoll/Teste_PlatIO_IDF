#include "h_AccessPoint.h"
#include "h_SPIFFS.h"
#include "h_Webserver.h"
#include "h_Websockets.h"
#include "h_DeepSleep.h"
#include "driver/lp_io.h"

void app_main(void)
{ 
    nvs_init();
    softap_init();

    spiffs_init();
    deepSleep_init();

    webserver_init();

    gpio_set_direction(25, GPIO_MODE_OUTPUT);
    gpio_set_level(25,1);
}