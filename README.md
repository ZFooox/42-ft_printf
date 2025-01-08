![Capture d’écran 2025-01-08 à 11 57 43](https://github.com/user-attachments/assets/2bf739b2-07f6-43cb-9d87-dbe1978bba25)

# ft_printf - 42 School Project 🚀

Welcome to **my ft_printf**, a custom implementation of the C standard `printf` function. This project is part of the 42 curriculum and aims to reimplement `printf` to better understand variadic functions, type conversions, and string formatting. 🎉

## Key Features ✨

My `ft_printf` includes a set of features that allow you to format various types of data for output. Here's an overview of the available features:

### Print Formats 📝
- **`%c`** - Prints a character.
- **`%s`** - Prints a string.
- **`%p`** - Prints a pointer (formatted as `0x...`).
- **`%d`** / **`%i`** - Prints a signed integer.
- **`%u`** - Prints an unsigned integer.
- **`%x`** - Prints an unsigned integer in lowercase hexadecimal.
- **`%X`** - Prints an unsigned integer in uppercase hexadecimal.
- **`%%`** - Prints a percent sign (`%`).

## Project Goals 🎯

The goals of this project are to:
- Reimplement the `printf` function in C.
- Work with variadic functions and explore format specifiers.
- Understand type conversions and memory management.
- Follow the 42 coding standard and improve C programming skills.
- Optimize the solution for efficiency.

## Usage Example 📚

Here’s an example of how to use `ft_printf` in a C program:

```c
#include "ft_printf.h"

int main()
{
    int nb = 42;
    char c = 'A';
    char *str = "Hello, World!";
    
    ft_printf("Number: %d, Char: %c, String: %s, Pointer: %p\n", nb, c, str, &str);
    return 0;
}
