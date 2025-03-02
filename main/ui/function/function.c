#include "esp_err.h"
#include "esp_log.h"
#include "esp_check.h"
#include "driver/i2c.h"
#include "driver/gpio.h"
#include "driver/spi_master.h"
#include "esp_lcd_panel_io.h"
#include "esp_lcd_panel_vendor.h"
#include "esp_lcd_panel_ops.h"
#include "esp_lvgl_port.h"
#include "lv_conf.h"
#include "lv_demos.h"
#include "esp_lcd_touch_cst816s.h"

#include "../ui.h"

void my_event_cb(lv_event_t * e)
{
    printf("switch deal!\r\n");
}