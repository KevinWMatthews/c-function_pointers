cmake_minimum_required(VERSION 3.5.1)

project(function_pointers VERSION 1.0.0)
enable_language(C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

add_executable(basic_syntax basic_syntax.c)
target_compile_options(basic_syntax
    PRIVATE "-Wall"
)

add_executable(typedef typedef.c)
target_compile_options(typedef
    PRIVATE "-Wall"
)

add_executable(as_parameter as_parameter.c)
target_compile_options(as_parameter
    PRIVATE "-Wall"
)

add_executable(in_struct in_struct.c)
target_compile_options(in_struct
    PRIVATE "-Wall"
)
