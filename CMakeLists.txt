cmake_minimum_required(VERSION 3.5.1)

project(function_pointers VERSION 1.0.0)
enable_language(C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

add_executable(standard standard.c)
target_compile_options(standard
    PRIVATE "-Wall"
)

add_executable(typedef typedef.c)
target_compile_options(typedef
    PRIVATE "-Wall"
)
