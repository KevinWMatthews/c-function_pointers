---
layout: page
title: Examples
---


## Basic Syntax

The standard syntax for function pointers is:

```c
int (*function_pointer)(char)
```

See [basic_syntax.c](https://github.com/KevinWMatthews/c-function_pointers/blob/master/basic_syntax.c).


## Typdef Syntax

It can be convenient to create a type alias for a function pointer signature:

```c
typedef int (*FUNCTION_POINTER)(char);
```

See [typedef_syntax.c](https://github.com/KevinWMatthews/c-function_pointers/blob/master/typedef_syntax.c)


## As Function Parameter

Function pointers can be passed into functions directly:
```c
void takes_function_pointer(int (*function_pointer)(char))
```

See [as_function_parameter.c](https://github.com/KevinWMatthews/c-function_pointers/blob/master/as_function_parameter.c)


## As Function Parameter using Typedef

Function pointers can be passed into a function using a custom type:
```c
typedef void (*FUNCTION_POINTER)(void);
void takes_function_pointer_typedef(FUNCTION_POINTER function_pointer)
```

See [as_function_parameter_typedef.c](https://github.com/KevinWMatthews/c-function_pointers/blob/master/as_function_parameter_typedef.c)


## As Function Parameter using Typedef, with Arguments

Function pointers can accept non-void arguments:
```c
typedef int (*FUNCTION_POINTER)(char);
void takes_function_pointer_typedef(FUNCTION_POINTER function_pointer)
```

See [as_function_parameter_typedef_args.c](https://github.com/KevinWMatthews/c-function_pointers/blob/master/as_function_parameter_typedef_args.c)


## As Struct Element

Structures can hold function pointers directly:

```c
struct
{
    int (*function_pointer)(char);
}
```

See [as_struct_element.c](https://github.com/KevinWMatthews/c-function_pointers/blob/master/as_struct_element.c)


## As Struct Element with Typedef

Structures can also store custom types that are function pointers:

```c
typedef int (*FUNCTION_POINTER)(char);
struct
{
    FUNCTION_POINTER function_pointer;
}
```

See [as_struct_element_typedef.c](https://github.com/KevinWMatthews/c-function_pointers/blob/master/as_struct_element_typedef.c)
