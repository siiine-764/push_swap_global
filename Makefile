NAME	= push_swap
CC		= cc
CFLAGS 	= -Wall -Wextra -Werror
LIBFT	= libft/libft.a

SRCS =	messages/ft_message_errors.c\
		push_swap.c\
		rules/ft_ss.c\
		rules/ft_pp.c\
		rules/ft_rr.c\
		rules/ft_rrr.c\
		rules/ft_tools_rules01.c\
		fill_stack/ft_fill_stck.c\
		rules/ft_tools_rules.c\
		sorting/ft_sort_min.c\
		sorting/ft_tools_sort1.c\
		sorting/ft_tools_sort2.c\
		sorting/ft_sort_big.c\
		check/ft_check_input.c\
		check/ft_check_sorted.c\
		fill_stack/ft_help.c\
		fill_stack/ft_split.c\

all: $(NAME)

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) $(LIBFT) $(OBJS) -o $(NAME)
	@echo "make it"

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

re: fclean $(NAME)

.PHONY: clean fclean re all