/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:57:37 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/10 22:27:54 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// void	ft_check_input(char **av)
// {
// 	int		i;
// 	int		j;
// 	size_t	len;
// 	size_t	spaces;

// 	i = 0;
// 	while (av[i])
// 	{
// 		j = -1;
// 		len = ft_strlen((const char *)av[i]);
// 		spaces = 0;
// 		while (av[i][++j])
// 			if(av[i][j] == ' ')
// 				spaces++;
// 		if (len == spaces)
// 			ft_message_error_space();
// 		i++;
// 	}
// }

// void	ft_check_nbr(char **av)
// {
// 	int		i;
// 	int		j;

// 	i = 0;
// 	while (av[i])
// 	{
// 		if(av[i][0] == '-' || av[i][0] == '+')
// 		{
// 			if (!(av[i][1] >= '0' && av[i][1] <= '9'))
// 			{	
// 				write(1, "error VIP\n", 10);
// 				exit(1);
// 			}
// 		}
// 		j = 0;
// 		while (av[i][++j])
// 		{
// 			while (av[i][j] == '-' || av[i][j] == '+')
// 			{
// 				if (!(av[i][j + 1] >= '0' && av[i][j + 1] <= '9') || av[i][j - 1] != ' ')
// 					ft_message_error_nbr();
// 				j++;
// 			}
// 		}
// 		printf("%d\n\n", i);
// 		i++;
// 	}
// }


void	check_argv(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 1;
	while (i != argc)
	{
		str = argv[i];
		while (*str)
		{
			if (*str == '-' || *str == '+' )
			{
				str++;
				if (*str < '0' || *str > '9')
				{
					write(1, "error VIP\n", 10);
				exit(1);
					
				}
			}
			else if (*str != ' ' && (*str < '0' || *str > '9'))
			{
				write(1, "error VIP\n", 10);
				exit(1);
			}
			if (*str)
				str++;
		}
		i++;
	}
}

void	ft_check_nbr(char **av)
{
	int i;
	int j;

	i = 0;
	while (av[i])
	{
		// printf("NUMBER: %s\n", av[i]);
		j =  i + 1;
		while(av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
			{
				write(1, "Error VIP : Double number\n", 26);
				exit(1);
			}
			j++;
		}
		i++;
	}
}