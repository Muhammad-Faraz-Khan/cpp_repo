cmake_minimum_required(VERSION 3.16)

project(ConsoleLogDisplay LANGUAGES CXX)

add_executable(ConsoleLogDisplay src/LogClass.cpp)

target_compile_features(ConsoleLogDisplay PRIVATE cxx_std_14)

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
	 target_compile_options(ConsoleLogDisplay PRIVATE -Wall -Wextra -Wpedantic)
elseif(MSVC)
 	 target_compile_options(ConsoleLogDisplay PRIVATE /W4)
endif()
