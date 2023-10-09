NAME = libft.a
CC= gcc -g
FLAGS= -Wall -Wextra -Werror
SRC= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_substr.c ft_toupper.c ft_tolower.c
OBJS = $(SRC:.c=.o)
RM = rm -rf

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $*.c -o $*.o

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

##DELETE BEFORE HANDING IN, ONLY USED FOR TESTING
exec:
	$(CC) $(FLAGS) -o a.out main.c $(SRC)
norminette:
	norminette $(SRC) libft.h
