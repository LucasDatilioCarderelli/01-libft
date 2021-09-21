<div align="center">
	<a href="https://www.42sp.org.br/">
		<img src="https://static.wixstatic.com/media/1b540d_3141ceec765a45f4954e1e725e536a72~mv2.png/v1/fill/w_148,h_50,al_c,q_85,usm_0.66_1.00_0.01/42sp_logo_preto.webp">
	</a>
</div>

<h1 align="center"> Libft </h1>

<h2 align="center">
	Project develop for <a href="https://github.com/LucasDatilioCarderelli/42Cursus"> 42Cursus </a>
</h2>

<p align="center">
  	<a href="https://www.linkedin.com/in/lucasdatiliocarderelli/">
    	<img alt="Linkedin" src="https://img.shields.io/badge/Lucas Datilio Carderelli-blue?style=flat&logo=Linkedin&logoColor=white" />
  	</a>
    <img src="https://img.shields.io/github/last-commit/LucasDatilioCarderelli/00-Libft?color=blue">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/LucasDatilioCarderelli/00-Libft?color=blue" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/LucasDatilioCarderelli/00-Libft?color=blue" />
</p>

## List of Functions

### Functions from `<ctype.h>`

- [`ft_isalpha`](src/ft_isalpha.c)	- checks for an alphabetic character.
- [`ft_isdigit`](src/ft_isdigit.c)	- check for a digit (0 through 9).
- [`ft_isalnum`](src/ft_isalnum.c)	- checks for an alphanumeric character.
- [`ft_isascii`](src/ft_isascii.c)	- checks whether c fits into the ASCII character set.
- [`ft_isprint`](src/ft_isprint.c)	- checks for any printable character.
- [`ft_toupper`](src/ft_toupper.c)	- convert char to uppercase.
- [`ft_tolower`](src/ft_tolower.c)	- convert char to lowercase.

### Functions from `<string.h>`

- [`ft_strlen`](src/ft_strlen.c)	- calculate the length of a string.
- [`ft_memset`](src/ft_memset.c)	- fill memory with a constant byte.
- [`ft_bzero`](src/ft_bzero.c)	- zero a byte string.
- [`ft_memcpy`](src/ft_memcpy.c)	- copy memory area.
- [`ft_memmove`](src/ft_memmove.c)	- copy memory area.
- [`ft_strlcpy`](src/ft_strlcpy.c)	- copy string to a specific size.
- [`ft_strlcat`](src/ft_strlcat.c)	- concatenate a string to a specific size.
- [`ft_strchr`](src/ft_strchr.c)	- locate character in a string.
- [`ft_strrchr`](src/ft_strrchr.c)	- locate character in a string.
- [`ft_strncmp`](src/ft_strncmp.c)	- compare two strings.
- [`ft_memchr`](src/ft_memchr.c)	- scan memory for a character.
- [`ft_memcmp`](src/ft_memcmp.c)	- compare memory areas.
- [`ft_strnstr`](src/ft_strnstr.c)	- locate a substring in a string.
- [`ft_strdup`](src/ft_strdup.c)	- creates a duplicate for the string passed as a parameter.

### Functions from `<stdlib.h>`
- [`ft_atoi`](src/ft_atoi.c)	- convert a string to an integer.
- [`ft_calloc`](src/ft_calloc.c)	- allocates memory and sets its bytes' values to 0.

### Non-standard functions
- [`ft_substr`](src/ft_substr.c)	- returns a substring from a string.
- [`ft_strjoin`](src/ft_strjoin.c)	- concatenates two strings.
- [`ft_strtrim`](src/ft_strtrim.c)	- trims the beginning and end of a string with a specific set of chars.
- [`ft_split`](src/ft_split.c)	- splits a string using a char as parameter.
- [`ft_itoa`](src/ft_itoa.c)	- converts a number into a string.
- [`ft_strmapi`](src/ft_strmapi.c)	- applies a function to each character of a string.
- [`ft_striteri`](src/ft_striteri.c)	- applies a function to each character of a string.
- [`ft_putchar_fd`](src/ft_putchar_fd.c)	- output a char to a file descriptor.
- [`ft_putstr_fd`](src/ft_putstr_fd.c)	- output a string to a file descriptor.
- [`ft_putendl_fd`](src/ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line.
- [`ft_putnbr_fd`](src/ft_putnbr_fd.c)	- output a number to a file descriptor.

### Linked list functions

- [`ft_lstnew`](src/ft_lstnew.c)	- creates a new list element.
- [`ft_lstadd_front`](src/ft_lstadd_front.c)	- adds an element at the beginning of a list.
- [`ft_lstsize`](src/ft_lstsize.c)	- counts the number of elements in a list.
- [`ft_lstlast`](src/ft_lstlast.c)	- returns the last element of the list.
- [`ft_lstadd_back`](src/ft_lstadd_back.c)	- adds an element at the end of a list.
- [`ft_lstclear`](src/ft_lstclear.c)	- deletes and free list.
- [`ft_lstiter`](src/ft_lstiter.c)	- applies a function to each element of a list.
- [`ft_lstmap`](src/ft_lstmap.c)	- applies a function to each element of a list.
