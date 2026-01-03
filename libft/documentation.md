# Libft, My Very Own Standard Library (because why not reinvent the wheel?)

Re-implementing the C standard library may sound like an odd hobby, but in the 42 world it’s a rite of passage.  
This project allowed me to rebuild many of the core utility functions from scratch: memory, strings & lists and truly understand how things work under the hood.

## Project Aim

The goal of **libft** is to recreate essential C library functions with clean, safe, and well-structured implementations, plus a few handy additional utilities.  
This builds a strong foundation for all future 42 projects by making sure we actually know what goes on behind the scenes.

## Implemented Functions

### Part 1 — Libc Functions

These recreate standard library behaviors:

- ft_isalpha  
- ft_isdigit  
- ft_isalnum  
- ft_isascii  
- ft_isprint  
- ft_strlen  
- ft_memset  
- ft_bzero  
- ft_memcpy  
- ft_memmove  
- ft_strlcpy  
- ft_strlcat  
- ft_toupper  
- ft_tolower  
- ft_strchr  
- ft_strrchr  
- ft_strncmp  
- ft_memchr  
- ft_memcmp  
- ft_strnstr  
- ft_atoi  
- ft_calloc  
- ft_strdup  

### Part 2 — Additional Functions

Higher-level helpers for manipulating strings and memory:

- ft_substr  
- ft_strjoin  
- ft_strtrim  
- ft_split  
- ft_itoa  
- ft_strmapi  
- ft_striteri  
- ft_putchar_fd  
- ft_putstr_fd  
- ft_putendl_fd  
- ft_putnbr_fd  

### Bonus Part — Linked List Utilities

Everything needed to manage singly linked lists:

- ft_lstnew  
- ft_lstadd_front  
- ft_lstsize  
- ft_lstlast  
- ft_lstadd_back  
- ft_lstdelone  
- ft_lstclear  
- ft_lstiter  
- ft_lstmap  

## Build Instructions & Makefile

The project uses a modular Makefile to keep building simple and clean.

### How to run it:

- `make` – compiles all `.c` files into object files and creates `libft.a`  
- `make clean` – removes object files  
- `make fclean` – removes object files and the library  
- `make re` – full rebuild

Your final static library will be: `libft.a` 

### Memory Checking

To confirm everything is clean and leak-free, run:

``` bash
valgrind --leak-check=full ./your_program
```

## Skills Gained

Working on libft built a wide range of low-level programming skills, including:

- A good understanding of pointers.

- Understanding memory allocation and manual memory management

- Clean implementation of common string and memory operations

- Linked list creation, manipulation, and cleanup

- Writing modular, maintainable C code

- Using Makefiles to automate builds

- Debugging and validating code with tools like Valgrind

- Developing consistent coding discipline following strict 42 norms