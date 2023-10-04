NAME = libft.a
CC= gcc
FLAGS= -Wall -Wextra -Werror
SRC= ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c ft_strlen.c
OBJS = $(SRC:.c=.o)
RM = rm -rf

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $*.c -o $*.o

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) *.o

fclean:
	$(RM) $(NAME)

re: all

##DELETE BEFORE HANDING IN, ONLY USED FOR TESTING
exec:
	$(CC) $(FLAGS) -o a.out main.c $(SRC)
norminette:
	norminette $(SRC) libft.h
