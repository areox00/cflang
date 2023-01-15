#include <iostream>
#include "cflang.hpp"

auto main(int argc, char **args) -> int
{
    if (argc < 2) {
        std::cout << "File not specified!\nUsage: cflang [file]";

        return -1;
    }

    try {
        run_file(args[1]);
    }
    catch (const std::runtime_error &error) {
        std::cerr << error.what() << "\n";
    }

    return 0;
}