CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

INC = -I ../../include
LIB_DIR = ../../library

LIBFT_SRCS = \
	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
	ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \
	ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
	ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
	ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

PRINTF_SRCS = \
	ft_printf.c print_char.c print_hex.c print_nbr.c print_ptr.c \
	print_str.c print_unsigned.c print_pct.c check_error.c

GNL_SRCS = \
	get_next_line.c get_next_line_utils.c

SRCS = $(LIBFT_SRCS) $(PRINTF_SRCS) $(GNL_SRCS)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@
    
$(NAME): $(OBJS)
	@mkdir -p $(LIB_DIR)
	@ar -rcs $(LIB_DIR)/$(NAME) $^
	@echo "Make $(NAME) complete in $(LIB_DIR)"
    
clean:
	@rm -f $(OBJS)
    
fclean: clean
	@rm -f $(LIB_DIR)/$(NAME)
    
re: fclean all

.PHONY: all clean fclean re