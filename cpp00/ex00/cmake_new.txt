cmake_minimum_required(VERSION 3.16)

project(Helloworld LANGUAGES CXX)

add_executable(Helloworld
    src/helloworld.cpp
)

target_compile_features(Helloworld PRIVATE cxx_std_14)

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU"
   OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    target_compile_options(Helloworld PRIVATE -Wall -Wextra -Wpedantic)
elseif(MSVC)
    target_compile_options(Helloworld PRIVATE /W4)
endif()
