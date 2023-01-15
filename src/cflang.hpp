#pragma once

#include <string_view>
#include <span>

auto run(std::span<const uint8_t> data) -> void;
auto run_file(std::string_view path) -> void;