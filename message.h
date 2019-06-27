#pragma once

#include <cstdint>

struct Message {
  uint32_t length = 0;
  uint8_t *data = nullptr;
  int version = 0;
};
