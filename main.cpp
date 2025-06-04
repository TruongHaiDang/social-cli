#include <iostream>
#include <CLI/CLI.hpp>
#include <string>

#include "headers/interfaces.h"

using namespace std;

int main(const int argc, char **argv) {
    CLI::App app{"Social media management in command line interface."};
    SocialMediaPlatform platform;

    auto youtube = app.add_subcommand("youtube", "Youtube platform");
    youtube->add_flag("-a, --auth", "Get auth token");
    youtube->callback([&platform]() {
       cout << "Login to your youtube account" << endl;
    });

    CLI11_PARSE(app, argc, argv);
    return 0;
}
