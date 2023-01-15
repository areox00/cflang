#include "cflang.hpp"

#include <fstream>
#include <stdint.h>
#include <vector>
#include <stdexcept>
#include "scanner.hpp"

#include <iostream>

auto run(std::span<const uint8_t> data) -> void
{

}

auto run_file(std::string_view path) -> void 
{
    std::ifstream stream;
    stream.open(path.data(), std::ios::in);

    if (!stream.good()) {
        throw std::runtime_error(std::string(path) + " does not exist!");
    }

    stream.seekg(0, std::ios::end);
    size_t length = stream.tellg();
    stream.seekg(0, std::ios::beg);

    std::vector<uint8_t> bytes;
    bytes.resize(length);

    stream.read(reinterpret_cast<char *>(bytes.data()), length);

    run(bytes);
}