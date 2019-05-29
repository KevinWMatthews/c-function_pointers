---
layout: page
title: Examples
---


## Basic Syntax

The standard syntax for function pointers is:

```c
void (*function_pointer)(void)
int (*function_pointer)(char *)
```

See [basic_syntax](https://github.com/KevinWMatthews/c-function_pointers/blob/master/basic_syntax).


## Typdef Syntax

It can be convenient to create a type alias for a function pointer signature:

```c
typedef void (*FUNCTION_POINTER)(void);
typedef int (*FUNCTION_POINTER)(char *);
```

See [typedef_syntax](https://github.com/KevinWMatthews/c-function_pointers/blob/master/typedef_syntax).


## Function Parameter

Function pointers can be passed into functions directly:
```c
void takes_function_pointer(void (*function_pointer)(void))
void takes_function_pointer(int (*function_pointer)(char *))
```

See [function_parameter](https://github.com/KevinWMatthews/c-function_pointers/blob/master/function_parameter).


## Function Parameter using Typedef

Function pointers can be passed into a function using a custom type alias:
```c
typedef void (*FUNCTION_POINTER)(void);
void takes_function_pointer_typedef(FUNCTION_POINTER function_pointer)
```
or
```c
typedef int (*FUNCTION_POINTER)(char *);
void takes_function_pointer_typedef(FUNCTION_POINTER function_pointer)
```

See [function_parameter_typedef](https://github.com/KevinWMatthews/c-function_pointers/blob/master/function_parameter_typedef).


## Struct Element

Structures can hold function pointers directly:

```c
struct
{
    void (*function_pointer)(void);
}
```
or
```c
struct
{
    int (*function_pointer)(char *);
}
```

See [struct_element](https://github.com/KevinWMatthews/c-function_pointers/blob/master/struct_element).


## Struct Element with Typedef

Structures can also store custom types that are function pointers:

```c
typedef void (*FUNCTION_POINTER)(void);
struct
{
    FUNCTION_POINTER function_pointer;
}
```
or
```c
typedef int (*FUNCTION_POINTER)(char *);
struct
{
    FUNCTION_POINTER function_pointer;
}
```
See [struct_element_typedef](https://github.com/KevinWMatthews/c-function_pointers/blob/master/struct_element_typedef).
