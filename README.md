*This project has been created as part of the 42 curriculum by haenneiy.*

# Libft

## Description

Libft is my first own C library. The goal of the project is to
reimplement a set of standard libc functions, to write additional
utility functions, and to manipulate linked lists. The result is
a static library, `libft.a`, that I can reuse in my future 42 projects.

<Add 1-2 sentences: what you learned (memory, pointers, norm...).>

## Library content

### Part 1 - Libc functions
ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint,
ft_strlen, ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_strlcpy,
ft_strlcat, ft_toupper, ft_tolower, ft_strchr, ft_strrchr,
ft_strncmp, ft_memchr, ft_memcmp, ft_strnstr, ft_atoi,
ft_calloc, ft_strdup

### Part 2 - Additional functions
ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi,
ft_striteri, ft_putchar_fd, ft_putstr_fd, ft_putendl_fd,
ft_putnbr_fd

### Part 3 - Linked list
ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast,
ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap

<For each part, add 1 sentence: what these functions do.>

## Instructions

### Compilation
    make        # builds libft.a at the root of the repository
    make clean  # removes object files
    make fclean # removes object files and libft.a
    make re     # rebuilds everything

### Usage
Include the header and link the library:

    #include "libft.h"

    cc -Wall -Wextra -Werror main.c libft.a -o test

## Resources

### References
- Linux man pages (`man 3 strlen`, `man 3 malloc`, ...)
- The C Programming Language (Kernighan & Ritchie)
- 42 Norm (norminette documentation)
- <Add any tutorial/video/article you really used.>

### Use of AI
AI was used as a learning aid for: <list your real tasks>.
Examples: understanding pointers and memory layout, understanding
`int c` vs `char c` and EOF, debugging segmentation faults,
understanding Norminette errors, and preparing for the evaluation.
All the code was written and understood by me.