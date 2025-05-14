# libft

Libft is my own implementation of standard C library functions. It was created as the very first project in the 42 School core curriculum and was graded by Moulinette at 125%.

## Features

- Implementation of standard C functions, such as:
  - `ft_strlen`, `ft_strcpy`, `ft_strdup`
  - `ft_atoi`, `ft_itoa`
  - `ft_memset`, `ft_memcpy`, `ft_memmove`
- Additional helper functions:
  - Linked list manipulation
  - File and stream handling (`ft_putchar_fd`, `ft_putstr_fd`)

## Installation

1. Clone the repository:  
   git clone https://github.com/trosinski08/libft.git  
   cd libft  

2. Build the library:  
   make  

3. Use `libft.a` in your project by linking it:  
   gcc -o program main.c -L./libft -lft  

## Author

This library was created by Tomasz Rosiński as part of the 42 School curriculum.