/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:57:37 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/20 01:40:34 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_check_speace(char **av)
{
	int		i;
	int		j;
	size_t	len;
	size_t	spaces;

	i = 1;
	while (av[i])
	{
		j = -1;
		len = ft_strlen((const char *)av[i]);
		spaces = 0;
		while (av[i][++j])
		{
			if (av[i][j] == ' ')
			{
				spaces++;
			}
		}
		if (len == spaces)
			message_error();
		i++;
	}
}

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
			if (*str == '-' || *str == '+')
			{
				str++;
				if (*str < '0' || *str > '9')
					message_error();
			}
			else if (*str != ' ' && (*str < '0' || *str > '9'))
				message_error();
			if (*str)
				str++;
		}
		i++;
	}
}

void	ft_check_nbr(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				message_error();
			j++;
		}
		i++;
	}
}
