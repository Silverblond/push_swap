NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -Ireadlines -Ilibft -Isrcs
LDFLAGS		= -lreadline

SRCS		= $(shell find srcs -name "*.c")
OBJS		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re