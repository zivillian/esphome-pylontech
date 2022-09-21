#pragma once

#include "esphome/core/component.h"
#include "esphome/components/uart/uart.h"

namespace esphome {
namespace pylontech {
  class Pylontech: public uart::UARTDevice, public Component {
    public:
      void setup() override;
      void loop() override;
      void dump_config() override;
  };
} // namespace pylontech
} // namespace esphome