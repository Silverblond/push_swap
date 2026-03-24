NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -Ireadlines -Ilibft -Isrcs
LDFLAGS		= -lreadline

SRCS		= srcs/main.c \
            srcs/parse/parse.c \
            srcs/parse/validate.c \
            srcs/parse/error.c \
            srcs/parse/ft_split.c \
            srcs/stack/stack_init.c \
            srcs/stack/stack_utils.c \
            srcs/operations/op_swap.c \
            srcs/operations/op_push.c \
            srcs/operations/op_rotate.c \
            srcs/operations/op_rrotate.c \
            srcs/sort/sort_23.c \
            srcs/sort/sort_5.c \
            srcs/sort/sort_radix.c
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