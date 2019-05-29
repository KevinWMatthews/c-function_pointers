cmake_minimum_required(VERSION 3.5.1)

project(function_pointers VERSION 1.0.0)
enable_language(C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

add_compile_options("-Wall")

add_subdirectory(1_syntax)
add_subdirectory(2_syntax_typedef)
add_subdirectory(3_function_parameter)
add_subdirectory(4_function_parameter_typedef)
add_subdirectory(5_struct_element)
add_subdirectory(6_struct_element_typedef)
