cmake_minimum_required(VERSION 3.5.1)

project(function_pointers VERSION 1.0.0)
enable_language(C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

add_compile_options("-Wall")

add_executable(basic_syntax basic_syntax.c)

add_executable(typedef_syntax typedef_syntax.c)

add_executable(as_function_parameter as_function_parameter.c)

add_executable(as_function_parameter_typedef as_function_parameter_typedef.c)

add_executable(as_function_parameter_typedef_args as_function_parameter_typedef_args.c)

add_executable(as_struct_element as_struct_element.c)

add_executable(as_struct_element_typedef as_struct_element_typedef.c)
