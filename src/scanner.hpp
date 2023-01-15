#pragma once

#include <span>
#include <stdint.h>
#include "token.hpp"

auto scan_tokens(std::span<const uint8_t> data) -> void;