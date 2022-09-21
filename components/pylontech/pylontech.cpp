#include "esphome/core/log.h"
#include "pylontech.h"

namespace esphome {
namespace pylontech {

static const char *TAG = "pylontech.component";

void Pylontech::setup() {

}

void Pylontech::loop() {

}

void Pylontech::dump_config(){
    ESP_LOGCONFIG(TAG, "pylontech component");
}

} // namespace pylontech
} // namespace esphome