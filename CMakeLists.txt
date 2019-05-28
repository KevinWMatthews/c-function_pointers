cmake_minimum_required(VERSION 3.5.1)

project(function_pointers VERSION 1.0.0)
enable_language(C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

add_compile_options("-Wall")

add_executable(basic_syntax basic_syntax/basic_syntax.c)
add_executable(basic_syntax2 basic_syntax/basic_syntax2.c)

add_executable(typedef_syntax typedef_syntax/typedef_syntax.c)
add_executable(typedef_syntax2 typedef_syntax/typedef_syntax2.c)

add_executable(function_parameter function_parameter/function_parameter.c)
add_executable(function_parameter2 function_parameter/function_parameter2.c)

add_executable(function_parameter_typedef function_parameter_typedef/function_parameter_typedef.c)
add_executable(function_parameter_typedef2 function_parameter_typedef/function_parameter_typedef2.c)

add_executable(struct_element struct_element/struct_element.c)
add_executable(struct_element2 struct_element/struct_element2.c)

add_executable(as_struct_element_typedef as_struct_element_typedef.c)
