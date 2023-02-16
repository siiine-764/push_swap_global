/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:49:13 by mayache-          #+#    #+#             */
/*   Updated: 2023/02/16 21:21:46 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_check_input(char **av)
{
	int		i;
	int		j;
	size_t	len;
	size_t	spaces;

	i = 0;
	while (av[i])
	{
		j = -1;
		len = ft_strlen((const char *)av[i]);
		spaces = 0;
		while (av[i][++j])
			if(av[i][j] == ' ')
				spaces++;
		if (len == spaces)
			ft_message_error_space();
		i++;
	}
}


void	check_argv(int argc, char **argv) 
{
	int		i;
	char	*str;

	i = 1;
	if (argc == 1)
			write(1, "error nbr 💀\n", 15);
	while (i != argc)
	{
		str = argv[i];
		while (*str)
		{
			if (*str == '-' || *str == '+' )
			{
				str++;
				if (*str < '0' || *str > '9')
						write(1, "error nbr 💀\n", 15);
			}
			else if (*str != ' ' && (*str < '0' || *str > '9'))
							write(1, "error nbr 💀\n", 15);
			if (*str)
				str++;
		}
		i++;
	}
}

// void	ft_check_nbr(char **av)
// {
// 	int	i;
// 	int	j;

// 	i = -1;
// 	while (av[++i])
// 	{
// 		j = 0;
// 		while (av[i][j] == ' ')
// 			j++;
// 		printf("%d\n", j);
// 		printf("%s\n", av[i]);
// 		while (av[i][j])
// 		{
// 			if (!((av[i][j] >= '0' && av[i][j] <= '9') || av[i][j] == '-' || av[i][j] == '+'))
// 				ft_message_error();
// 			j++;
// 		}
// 	}
// }

void	ft_check_integer(char **av)
{
	int		i;
	int		j;
	int		sign;
	long	res;
	// int		len;
	// t_info_nbr	n;

	i = -1;
	while (av[++i])
	{
		j = 0;
		res = 0;
		sign = 1;
		//len = ft_strlen((const char *)av[i]);
		// printf("len -> %d\n", len);

		while (av[i][j])
		{
			//n.nbrs[len][j];
			while (av[i][j] == '-' || av[i][j] == '+')
			{
				if (av[i][j - 1] != ' ')
					printf("----->error<----\n");
				j++;
			}
			// while (av[i][j] == '-')
			// {
            //     sign *= -1;
			// 	j++;
			// }
			// if (av[i][j] >= '0' && av[i][j] <= '9')
            // {
            //     res = (res * 10) + av[i][j] - '0';
            // }
			j++;
		}
		res *= sign;
		// //n.nbrs[len] += res; 
		// // printf("%ld", n.nbrs[len]);
		// if (res < MIN_INT || res > MAX_INT)
		// 	ft_message_error_integer();
		printf("----> |%ld|\n", res);
	}
}

// ft_fill_stack(char **av, int ac)
// {
// 	int		i;
// 	int		j;
// 	int		sign;
// 	long	res;
// 	// int		len;
// 	// t_info_nbr	n;

// 	i = -1;
// 	while (av[++i])
// 	{
// 		j = 0;
// 		res = 0;
// 		sign = 1;
// 		//len = ft_strlen((const char *)av[i]);
// 		// printf("len -> %d\n", len);

// 		while (av[i][j])
// 		{
// 			//n.nbrs[len][j];
// 			while (av[i][j] == ' ')
// 				j++;
// 			while (av[i][j] == '-')
// 			{
//                 sign *= -1;
// 				j++;
// 			}
// 			if (av[i][j] >= '0' && av[i][j] <= '9')
//             {
//                 res = (res * 10) + av[i][j] - '0';
//             }
// 			j++;
// 		}
// 		res *= sign;
// 		//n.nbrs[len] += res; 
// 		// printf("%ld", n.nbrs[len]);
// 		if (res < MIN_INT || res > MAX_INT)
// 			ft_message_error_integer();
// 		printf("----> |%ld|\n", res);
// 	}	
// }

void	ft_check_nbr(char **av)
{
	int		i;
	int		j;

	i = 0;
	while (av[i])
	{
		if(av[i][0] == '-' || av[i][0] == '+')
		{
			if (!(av[i][1] >= '0' && av[i][1] <= '9'))
			{	
				write(1, "error VIP\n", 10);
				exit(1);
			}
		}
		j = 0;
		while (av[i][++j])
		{
			while (av[i][j] == '-' || av[i][j] == '+')
			{
				if (!(av[i][j + 1] >= '0' && av[i][j + 1] <= '9') || av[i][j - 1] != ' ')
					ft_message_error_nbr();
				j++;
			}
		}
		printf("%d\n\n", i);
		i++;
	}
}

int main(int ac, char **av)
{
	int	i;
	// char	**arry;
	printf("%d\n", ac - 1);

	i = 1;
	if (ac <= 1)
		ft_message_error_empty();
	int	k;
	// int	j;

	k = 0;

	check_argv(ac, av);
	// while (av[k])
	// {
	// 	j = 0;
	// 	while (av[k][j] == ' ')
	// 		j++;
	// 	// printf("%d\n", j);
	// 	while (av[k][j])
	// 	{
	// 	printf("%c", av[k][j]);
	// 		j++;
	// 	}
	// 	k++;
	// }
	// int j = 0;
	printf("Hallo leute\n");
	// ft_check_nbr(&av[i]);
	// ft_check_input(&av[i]);
	// ft_check_nbr(&av[i]);
	// ft_check_integer(&av[i]);
	// while (av[i])
	// {
	// 	j = 0;
	// 	while (av[i][j])
	// 	{
	// 		while (av[i][j] == ' ')
	// 			j++;
	// 	arry = ft_strjoin ((const char *)arry, (const char *)av[i][j]);
	// 	printf("-%c-", av[i][j]);
	// 		j++;
	// 	}
	// 	i++;
	// }
		printf("++++%s", av[1]);
		printf("++++%s", av[2]);
		printf("++++%s", av[3]);
	// ft_fill_stack(&av[i], ac);
	return (0);
}
