NAME	= push_swap
CC		= gcc
CFLAGS 	= -Wall -Wextra -Werror
LIBFT	= libft/libft.a

SRCS =	./utils/ft_message_errors.c\
		push_swap.c\

all: $(NAME)

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS) $(LIBFT)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(LIBFT):
	@make -C libft
	@make -C libft bonus

clean:
	@rm -f $(OBJS)
	@make -C libft clean
	@echo "clean push_swap"

fclean: clean
	@make -C libft fclean
	@rm -f $(NAME)
	@echo "fclean push_swap"