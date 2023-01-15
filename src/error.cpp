#include "error.hpp"

#include <iostream>

auto print_error(int line, std::string_view message) -> void
{
    std::cerr << "[line " + std::to_string(line) + "] Error! " + std::string(message);
}