cmake_minimum_required(VERSION 3.5.1)

project(function_pointers VERSION 1.0.0)
enable_language(C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

add_executable(basic_syntax basic_syntax.c)
target_compile_options(basic_syntax
    PRIVATE "-Wall"
)

add_executable(typedef_syntax typedef_syntax.c)
target_compile_options(typedef_syntax
    PRIVATE "-Wall"
)

add_executable(as_function_parameter as_function_parameter.c)
target_compile_options(as_function_parameter
    PRIVATE "-Wall"
)

add_executable(as_struct_element as_struct_element.c)
target_compile_options(as_struct_element
    PRIVATE "-Wall"
)
