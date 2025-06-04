cmake_minimum_required(VERSION 3.31)
project(social_cli VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    add_compile_options(-Wall -Werror -Wpedantic -Wextra)
elseif (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    add_compile_options(/W4 /WX)
endif()

set(TARGET_NAME "social_cli")

find_package(CLI11)
find_package(CURL)

add_subdirectory(headers)
add_subdirectory(libs/youtube)

add_executable(${TARGET_NAME} main.cpp)
target_link_libraries(${TARGET_NAME} CLI11::CLI11 CURL::libcurl)
