/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:57:37 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/17 00:36:19 by mayache-         ###   ########.fr       */
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
		j =  i + 1;
		while(av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
			{
				printf("---> i[%d] %s\n", i, av[i]);
				printf("---> j[%d] %s\n", j, av[j]);
				// printf(" the double number is : ---> i[%d] = %s. ---> j[%d] = %s\n", i, av[i], j, av[j]);
				write(1, "Error VIP : Double number\n", 26);
				exit(1);
			}
			// printf("---> i[%d] = %s. ---> j[%d] = %s\n", i, av[i], j, av[j]);
			// printf("av[%d] = %s\n", j, av[j]);
			j++;
		}
		i++;
	}
}