NAME = gnl.a
CC = cc -g
FLAGS = -Wall -Wextra -Werror
SRC = *.c
RM = rm -rf
OBJS=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all
