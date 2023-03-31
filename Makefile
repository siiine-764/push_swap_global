NAME	= push_swap
CC		= gcc
CFLAGS 	= -Wall -Wextra -Werror
LIBFT	= libft/libft.a

SRCS =	./utils/ft_message_errors.c\
		push_swap.c\
		./functions_sort/ft_ss.c\
		./functions_sort/ft_pp.c\
		./functions_sort/ft_rr.c\
		./functions_sort/ft_rrr.c\
		utils/ft_fill_stck.c\
		./utils/ft_sort_a.c\
		./utils/functions_help_to_sorting.c\
		./sorting/ft_sort_min.c

all: $(NAME)

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS) $(LIBFT) $(FT_PRINTF)
	@$(CC) $(CFLAGS) $(LIBFT) $(FT_PRINTF) $(OBJS) -o $(NAME)
	@echo "\x1b[31m							\n\
	⠀⠀⠀⠀⠀⠀⠀⠀⣺⣷⠙⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠏⣼⣖⠀⠀⠀\n\
	⠀⠀⠀⠀⠀⠀⠀⣠⠟⣛⠼⠓⠿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠿⠞⠧⣜⠻⣅⠀⠀⠀⠀⠀⠀⠀\n\
	⠀⠀⠀⠀⠀⣠⣾⡷⠋⢀⣤⢄⠀⠘⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠏⠀⡠⣤⡄⠑⢾⣷⣄⠀⠀⠀⠀⠀\n\
	⠀⠀⠀⠀⢀⣿⠟⠀⡄⡻⠇⠀⢡⠀⢹⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡞⠀⡀⠀⠺⢿⢢⡀⠻⡻⡄⠀⠀⠀⠀\n\
	⠀⠀⠀⣠⢋⠎⠀⡼⠀⡇⠀⠂⡀⠁⡀⢳⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⢀⠌⢀⠑⠦⢸⠀⣧⠀⠱⡜⢆⠀⠀⠀\n\
	⠀⠀⡰⠁⡞⠀⣼⡃⠀⣧⡄⠚⢷⡄⠈⠀⠳⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠾⠗⠁⢰⣾⠟⢀⣼⡀⢸⣷⠀⢱⠈⢧⠀⠀\n\
	⠀⡸⠁⣸⠁⢠⠇⡅⢰⣿⢡⡇⠀⠻⣿⣦⡰⢌⡑⠢⢤⣤⡀⠀⠀⠀⠀⢀⣤⣤⠴⢊⡡⢆⢴⣿⠟⠀⢸⡄⣿⡇⢸⠘⡄⠀⢧⠈⢧⠀\n\
	⢀⣇⠴⡇⠀⢸⠀⡇⢸⢿⣏⣧⡇⠀⠙⠛⠿⢦⣬⡓⢄⣉⠛⣄⠀⠀⣠⠞⢋⡠⢒⣉⣴⡿⠛⠃⠀⢸⣾⣿⡿⡇⢰⠀⢇⠀⠸⠧⣘⡆\n\
	⠘⠁⢸⠀⠀⡇⢴⠁⠈⡆⢻⣿⣦⡀⣷⣰⡤⠈⠛⢻⣴⣿⡿⠛⠃⠘⠛⢿⣷⣶⡿⠛⡁⢴⣶⣿⢀⣾⣿⡟⢀⠃⢸⣄⢸⠀⠀⠇⠈⠃\n\
	⠀⠀⡄⠀⢸⠁⢸⡇⠀⡇⠀⢻⠻⠿⠿⣿⣡⣿⣶⣶⢈⡌⡅⣶⣆⢰⣶⢨⠰⡉⣷⣦⣻⣾⣿⠿⠿⠟⡻⠀⢸⠀⢸⡇⠀⡇⠀⢸⠀⠀\n\
	⠀⠀⡇⢀⠇⠀⠈⣇⠀⢹⠀⠀⣆⠀⡄⠀⣨⠿⠿⢿⣿⣷⣆⣽⠃⠘⣿⣴⣴⣿⡿⠿⠿⢇⠀⢠⢄⣰⠃⠀⡎⠀⣸⠁⠀⠸⡀⢸⠀⠀\n\
	⠀⠀⣇⣼⠀⠀⠀⣿⠀⠈⡄⠀⠸⡄⠃⠰⠁⠀⣴⡾⠘⣿⠛⠟⠀⠀⠻⠿⣿⡇⢷⣤⣄⠈⢇⢸⢀⠇⠀⢀⠃⠀⣿⠀⠀⠀⣧⣸⡇⠀\n\
	⠀⠀⡿⢹⠀⠀⠀⡿⡇⠀⢡⠀⠀⢹⣗⣿⢠⣿⣿⡇⠀⡇⠀⠀⠀⠀⠀⠀⢸⠁⢸⣿⣼⡄⣺⢾⡟⠀⠀⡜⠀⢰⢿⠀⠀⠀⡟⠻⠇⠀\n\
	⠀⠀⠀⠘⡆⠀⠀⠁⠸⠀⠀⡆⠀⠈⢿⠹⠛⠛⠿⣷⣀⡇⠀⠀⠀⠀⠀⠀⢸⡄⣼⠿⠏⠛⠟⡿⠁⠀⢰⠁⠀⡎⢸⠀⠀⠀⡇⠀⠀⠀\n\
	⠀⠀⠀⠀⡇⠀⠀⠀⠀⢧⠀⠸⡀⠀⠈⢇⠀⠀⠀⠙⣿⡁⠀⠀⠀⠀⠀⠀⠀⣿⠏⠀⠀⠀⣰⠃⠀⢀⠏⠀⡸⠀⢸⠀⠀⢸⠁⠀⠀⠀\n\
	⠀⠀⠀⠀⣧⠀⠀⠆⠀⠘⡆⠀⢣⠀⠀⠘⡆⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠉⠀⠀⠀⢠⠇⠀⠀⡼⠀⢰⠃⠀⢸⠀⠀⣸⠀⠀⠀⠀\n\
	⠀⠀⠀⠀⢹⠀⠀⡇⠀⠀⠸⡄⠈⡆⠀⠀⢻⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡟⠀⠀⢠⠃⢀⠏⠀⠀⢸⠀⠀⡏⠀⠀⠀⠀\n\
	⠀⠀⠀⠀⠈⣆⢸⣧⠀⠀⠀⠱⡀⠸⡄⠀⠘⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠃⠀⢀⠇⠀⡞⠀⠀⠀⣼⡇⢰⠃⠀⠀⠀⠀\n\
	⠀⠀⠀⠀⠀⠘⣾⠈⢧⠀⠀⠀⢡⠀⠹⣄⠀⢧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠀⢠⡎⠀⡜⠀⠀⠀⡰⠁⣧⠏⠀⠀⠀⠀⠀\n\
	⠀⠀⠀⠀⠀⠀⠉⠀⠈⢣⡀⠀⠀⢇⠀⢻⣦⣸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣇⡰⡿⠀⠰⠁⠀⢀⡜⠁⠀⠉⠀⠀⠀⠀⠀⠀\n\
	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠱⡄⠀⠸⡄⠈⡆⠙⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠛⢡⠁⢀⠇⠀⢠⠞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣆⠀⢣⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡎⠀⡜⠀⣠⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢆⠘⡟⠲⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠗⢺⠃⡰⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢧⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⡴⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n\
	⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣻⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⠁ \x1b[41m"
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