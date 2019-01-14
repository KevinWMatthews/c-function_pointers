---
layout: page
title: Basic Syntax
---

## Basic Syntax

The standard syntax for function pointers is in `basic_syntax.c`:

```c
int (*function_pointer)(char *)
```

## Typdef Syntax

It is often frequent to create an type alias for a function pointer signature:

```c
typedef int (*FUNCTION_POINTER)(char *);
```

## As Function Parameter

Function pointers can be passed into functions directly:
```c
void takes_function_pointer(int (*function_pointer)(char *))
```

or using a typedef:
```c
typedef int (*FUNCTION_POINTER)(char *);
void takes_function_pointer_typedef(FUNCTION_POINTER function_pointer)
```

## As Struct Element

Structures can hold function pointers and/or `typedef`s:

```c
typedef int (*FUNCTION_POINTER)(char *);
struct
{
  int (*function_pointer)(char *);
  FUNCTION_POINTER function_pointer_typedef;
}
```
