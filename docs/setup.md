---
layout: page
title: Setup
---


## Prerequisites

  * CMake
  * C compiler (gcc, clang, etc)


## Setup

This repo is designed for an out-of-tree build.

First, create the directory structure and clone the repository:
```bash
$ mkdir c-function_pointers
$ cd c-function_pointers
$ git clone git@github.com:KevinWMatthews/c-function_pointers.git
$ mkdir build
```

You should have a tree similar to:
```
c-function_pointers/
├── build/
└── c-function_pointers/
```


## Build

Build the project using:

```bash
$ cd build
$ cmake ../c-function_pointers
$ make
```


## Run

Executables are located in the `bin/` directory and can be run directly:

```bash
$ ./bin/<executable_name>
```
