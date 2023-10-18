<div align = "center">

# 42 libft
![Static Badge](https://img.shields.io/badge/score-125%2F100-green?style=for-the-badge&labelColor=%2312263A&color=%2306BCC1)
![Static Badge](https://img.shields.io/badge/language-C-green?style=for-the-badge&labelColor=%2312263A&color=%2306BCC1)

#### 42 libft is the first project of the common core, this project makes the student recreate some standard C library functions and some addition functions that will be useful throughout the cursus.

</div>

# Standard C Library
Function | Description                                                                       | Status | Francinette
--- |-----------------------------------------------------------------------------------| --- | --
`ft_isalpha` | Checks if the char received is a letter                                           | ✔️ ️|  ✔️
`ft_isdigit` | Checks if the char received is a number                                           | ✔️ ️|  ✔️
`ft_isalnum` | Checks if the char received is alphanumeric                                       | ✔️ ️|  ✔️
`ft_isascii` | Checks if the char received is an ascii char                                      | ✔️ ️|  ✔️
`ft_isprint` | Checks if the char received is printable                                          | ✔️ ️|  ✔️
`ft_strlen` | Returns the size of the string received                                           | ✔️ ️|  ✔️
`ft_memset` | Fills a block of memory with a particular value                                   | ✔️ ️|  ✔️
`ft_bzero` | Deletes the information of a set block of memory                                  | ✔️ ️|  ✔️
`ft_memcpy` | Copies the values of x bytes from source to the destination                       | ✔️ ️|  ✔️
`ft_memmove` | Copies the values of x bytes from source to the destination                       | ✔️ ️|  ✔️
`ft_strlcpy` | Copies from src to dest and returns the length of the string copied               | ✔️ ️|  ✔️
`ft_strlcat` | Concatnates dest with src and returns the length of the string concatnated        | ✔️ ️|  ✔️
`ft_toupper` | Converts into upercase the lowercase char received                                | ✔️ ️|  ✔️
`ft_tolower` | Converts into lowercase the upercase char received                                | ✔️ ️|  ✔️
`ft_strchr` | Returns the first occurance of char in the string                                 | ✔️ ️|  ✔️
`ft_strrchr` | Returns the last occurance of char in the string                                  | ✔️ ️|  ✔️
`ft_strncmp` | Compares the given strings up to n characters                                     | ✔️ ️|  ✔️
`ft_memchr` | Searchs in x bytes on a block of memory the first occurance of the value received | ✔️ ️|  ✔️
`ft_memcmp` | Compares the first x bytes of a block of memory area str1 and str2                | ✔️ ️|  ✔️
`ft_strnstr` | Returns the first occurace of the _little_ string on the _big_ string             | ✔️ ️|  ✔️
`ft_atoi` | Converts the string received to it's int value                                    | ✔️ ️|  ✔️
`ft_calloc` | Allocates a memory block with the size received and initializes it                | ✔️ ️|  ✔️
`ft_strdup` | Duplicates the string received on to a allocated string                           | ✔️ ️|  ✔️

# Addition functions
Function | Description                                                                                                                  | Status | Francinette
--- |------------------------------------------------------------------------------------------------------------------------------| --- | --
`ft_substr` | Returns an allocated string that starts at the index received                                                                | ✔️ ️|  ✔️
`ft_strjoin` | Returns a new allocated string which is the result of the concatenation of both strings received                             | ✔️ ️|  ✔️
`ft_strtrim` | Returns a copy of the string received without the characters received removing them from the beginning and end of the string | ✔️ ️|  ✔️
`ft_split` | Returns a string separated by the character sent                                                                             | ✔️ ️|  ✔️
`ft_itoa` | Converts the int value received to it's character value                                                                      | ✔️ ️|  ✔️
`ft_strmapi` | Applies the function received to each letter of the string received, creating a new allocated string with the changes        | ✔️ ️|  ✔️
`ft_striteri` | Applies the function received to each letter of the string received and replaces the string received with the changes        | ✔️ ️|  ✔️
`ft_putchar_fd` | Outputs the char received on to the file descriptor given                                                                    | ✔️ ️|  ✔️
`ft_putstr_fd` | Outputs the string received on to the file descriptor given                                                                  | ✔️ ️|  ✔️
`ft_putendl_fd` | Outputs the string received on to the file descriptor given and ending it with a new line                                    | ✔️ ️|  ✔️
`ft_putnbr_fd` | Outputs the number received on to the file descriptor given                                                                  | ✔️ ️|  ✔️


# Bonus functions
Function | Description                                                                                                   | Status | Francinette
--- |---------------------------------------------------------------------------------------------------------------| --- | --
`ft_lstnew` | Creates and return a new allocated node to a linked list                                                      | ✔️ ️|  ✔️
`ft_lstadd_front` | Adds the node received to the beginning of a linked list                                                      | ✔️ ️|  ✔️
`ft_lstsize` | Returns the number of nodes on a linked list                                                                  | ✔️ ️|  ✔️
`ft_lstlast` | Returns the last node of a linked list                                                                        | ✔️ ️|  ✔️
`ft_lstadd_back` | Adds the node received to the end of a linked list                                                            | ✔️ ️|  ✔️
`ft_lstdelone` | Receives a node, deletes the contents of it's variables and frees the node                                    | ✔️ ️|  ✔️
`ft_lstclear` | Deletes and frees the given node and every successor of that node                                             | ✔️ ️|  ✔️
`ft_lstiter` | Applies the function received to every element of the node's variables                                        | ✔️ ️|  ✔️
`ft_lstmap` | Applis the function received to every element of the node's variables and creates a new linked list from that | ✔️ ️|  ✔️
