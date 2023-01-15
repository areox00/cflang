#include "scanner.hpp"

#include <vector>

auto scan_tokens(std::span<const uint8_t> data) -> void
{
    std::vector<Token> tokens;

    for (const auto &byte : data) {
        
    }
}