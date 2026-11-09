*This project has been created as part of the 42 curriculum by <anouisse>.*

# Libft - Your Very First Own Library

## Description

**Libft** is the first project of the 42 school curriculum. The objective of this project is to code a C library containing general-purpose functions that will serve as a foundational toolkit for future C assignments throughout the curriculum.

The library consists of three main parts:
1. **Libc Functions**: Re-implementations of standard C library functions (`strlen`, `memcpy`, `atoi`, etc.) adhering strictly to their standard behaviors.
2. **Additional Functions**: Utility functions for string manipulation, memory allocation, string splitting, number-to-string conversions, and file-descriptor outputs.
3. **Linked List Functions (Bonus)**: Functions designed to manipulate singly-linked lists using the `t_list` structure.

---

## Library Content & Detailed Descriptions

### Part 1 - Libc Functions

Re-implementation of core standard C functions. Prototypes are prefixed with `ft_`.

| Function | Description |
| :--- | :--- |
| `ft_isalpha` | Tests for an alphabetic character. |
| `ft_isdigit` | Tests for a decimal digit character. |
| `ft_isalnum` | Tests for an alphanumeric character. |
| `ft_isascii` | Tests whether `c` is a 7-bit US-ASCII character. |
| `ft_isprint` | Tests for any printable character including space. |
| `ft_strlen` | Computes the length of a string. |
| `ft_memset` | Fills memory with a constant byte. |
| `ft_bzero` | Erases data in the $(n)$ bytes of memory starting at the location pointed to by writing zeros. |
| `ft_memcpy` | Copies $(n)$ bytes from memory area `src` to memory area `dest`. |
| `ft_memmove` | Copies $(n)$ bytes from memory area `src` to `dest` handling overlapping memory regions. |
| `ft_strlcpy` | Size-bounded string copy. |
| `ft_strlcat` | Size-bounded string concatenation. |
| `ft_toupper` | Converts a lower-case letter to the corresponding upper-case letter. |
| `ft_tolower` | Converts an upper-case letter to the corresponding lower-case letter. |
| `ft_strchr` | Locates the first occurrence of a character in a string. |
| `ft_strrchr` | Locates the last occurrence of a character in a string. |
| `ft_strncmp` | Compares at most $n$ bytes of two strings. |
| `ft_memchr` | Scans memory for a character. |
| `ft_memcmp` | Compares memory areas. |
| `ft_strnstr` | Locates a substring in a string with limited length search. |
| `ft_atoi` | Converts the initial portion of the string pointed to by `str` to `int`. |
| `ft_calloc` | Allocates memory for an array of elements and initializes all bytes to zero. |
| `ft_strdup` | Duplicates a string using dynamically allocated memory. |

---

### Part 2 - Additional Functions

Functions that are not part of the standard Libc or are implemented in a modified form.

| Function | Prototype | Description |
| :--- | :--- | :--- |
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len);` | Extracts a substring from string `s` starting at index `start` up to length `len`. |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2);` | Concatenates `s1` and `s2` into a newly allocated string. |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set);` | Trims specified characters in `set` from beginning and end of `s1`. |
| `ft_split` | `char **ft_split(char const *s, char c);` | Splits string `s` into an array of substrings using character `c` as delimiter. |
| `ft_itoa` | `char *ft_itoa(int n);` | Converts an integer `n` to a string representation. |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));` | Applies function `f` to each character of string `s` to create a new string. |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char*));` | Applies function `f` to each character of string `s`, modifying it in-place. |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd);` | Outputs character `c` to the given file descriptor `fd`. |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd);` | Outputs string `s` to the given file descriptor `fd`. |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd);` | Outputs string `s` followed by a newline to the given file descriptor `fd`. |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd);` | Outputs integer `n` to the given file descriptor `fd`. |

---

### Part 3 - Linked List Functions (Bonus)

Functions for creating and manipulating singly-linked list nodes defined by the structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Prototype | Description |
| :--- | :--- | :--- |
| `ft_lstnew` | `t_list *ft_lstnew(void *content);` | Allocates and returns a new node with `content`. |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new);` | Adds node `new` at the beginning of list `lst`. |
| `ft_lstsize` | `int ft_lstsize(t_list *lst);` | Counts the number of nodes in list `lst`. |
| `ft_lstlast` | `t_list *ft_lstlast(t_list *lst);` | Returns the last node of list `lst`. |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list **lst, t_list *new);` | Adds node `new` at the end of list `lst`. |
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void *));` | Frees node content using `del` and then frees the node itself. |
| `ft_lstclear` | `void ft_lstclear(t_list **lst, void (*del)(void *));` | Deletes and frees node and all successors; sets list pointer to `NULL`. |
| `ft_lstiter` | `void ft_lstiter(t_list *lst, void (*f)(void *));` | Iterates over `lst` and applies `f` to each node's content. |
| `ft_lstmap` | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` | Creates a new list resulting from applying `f` to each node's content. |

---

## Instructions

### Compilation

The project includes a Makefile that compiles all source `.c` files using `cc` with `-Wall -Wextra -Werror` flags.

Available rules:
- `make` or `make all`: Compiles the mandatory part and generates `libft.a`.
- `make bonus`: Compiles both mandatory and linked list bonus functions into `libft.a`.
- `make clean`: Removes all compiled object (`.o`) files.
- `make fclean`: Removes object files and the generated `libft.a` binary.
- `make re`: Performs a clean re-compilation of the library.

### Usage Example

To incorporate **Libft** into your C project:

1. Copy the `libft` folder into your project root or keep `libft.a` and `libft.h` accessible.
2. Include the header in your C source file:
   ```c
   #include "libft.h"
   ```
3. Compile your project with `libft.a`:
   ```bash
   cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
   ```

---

## Resources & AI Usage

### References
- [Linux Man Pages](https://man7.org/linux/man-pages/)
- Standard C Library Documentation (`<string.h>`, `<stdlib.h>`, `<ctype.h>`)
- 42 Subject Documentation (v19.3)

### AI Usage Declaration
In accordance with Chapter III & V of the 42 subject rules:
- **Tasks & Purpose**: AI assistance was utilized for documentation formatting (generating Markdown layouts), writing edge-case unit test scenarios, and clarifying obscure C standard corner-cases (such as `memmove` overlap behavior vs `memcpy`).
- **Pedagogical Commitment**: Core algorithms, memory allocation strategy, pointer arithmetic, and linked list operations were personally designed, implemented, and debugged to ensure full technical mastery without relying on AI for direct code solutions during key learning phases.