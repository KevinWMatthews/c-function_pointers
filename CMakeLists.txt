cmake_minimum_required(VERSION 3.5.1)

project(function_pointers VERSION 1.0.0)
enable_language(C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

add_compile_options("-Wall")

add_subdirectory(syntax)
add_subdirectory(syntax_typedef)
add_subdirectory(function_parameter)
add_subdirectory(function_parameter_typedef)
add_subdirectory(struct_element)
add_subdirectory(struct_element_typedef)
