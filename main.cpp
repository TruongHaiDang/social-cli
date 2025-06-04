#include <iostream>
#include <CLI/CLI.hpp>

int main(int argc, char **argv) {
    CLI::App app{"Social media management in command line interface."};

    CLI11_PARSE(app, argc, argv);
    return 0;
}
