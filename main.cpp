#include <iostream>
#include <CLI/CLI.hpp>
#include <string>

#include "headers/interfaces.h"

using namespace std;

void platform_selected(SocialMediaPlatform platform);

int main(const int argc, char **argv) {
    CLI::App app{"Social media management in command line interface."};
    SocialMediaPlatform platform;
    app.add_option("-p, --platform", platform, "Platform name: \n0 - Youtube\n1 - "
                                               "Facebook\n2 - TikTok\n4 - Portfolio");
    CLI11_PARSE(app, argc, argv);

    platform_selected(platform);

    return 0;
}

void platform_selected(const SocialMediaPlatform platform) {
    switch (platform) {
        case SocialMediaPlatform::Youtube: {
            std::cout << "[Youtube]" << std::endl;
            break;
        }
        case SocialMediaPlatform::Facebook: {
            std::cout << "[Facebook]" << std::endl;
            break;
        }
        case SocialMediaPlatform::TikTok: {
            std::cout << "[TikTok]" << std::endl;
            break;
        }
        case SocialMediaPlatform::Portfolio: {
            std::cout << "[Portfolio]" << std::endl;
            break;
        }

        default: {
            std::cout << "[Unknown]" << std::endl;
            break;
        }
    }
}
