# Libft

A C library of useful functions that will be used throughout the 42 cursus.

## Project Description
Recreation of basic C functions and additional utilities to build a personal library.

## Content

### Mandatory
- Libc functions (character checks, string manipulation, memory management)
- Additional functions (string operations, memory allocation, file descriptor operations)

### Bonus
- Linked list functions (create, delete, modify and manipulate lists)

## Setup

```bash
# Compile library
make

# Compile with bonus
make bonus

# Clean files
make clean    # Remove .o files
make fclean   # Remove .o files and library
make re       # Recompile library
```

## Usage
```c
#include "libft.h"

// Compile your program with:
gcc your_program.c libft.a
```
