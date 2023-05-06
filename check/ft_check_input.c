/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:57:37 by mayache-          #+#    #+#             */
/*   Updated: 2023/05/05 23:32:38 by mayache-         ###   ########.fr       */
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
				spaces++;
		}
		if (len == spaces)
			message_error();
		i++;
	}
}

void	ft_tool(char *str)
{
	if (*str < '0' || *str > '9')
		message_error();
}

void	check_argv(int argc, char **argv)
{
	int		i;
	char	*str;
	char	*start;

	i = 0;
	start = &argv[1][0];
	while (++i != argc)
	{
		str = argv[i];
		while (*str)
		{
			if (*str == '-' || *str == '+')
			{
				if (*(str - 1) != *start
					&& *(str - 1) >= '0' && *(str - 1) <= '9')
					message_error();
				str++;
				ft_tool(str);
			}
			else if (*str != ' ' && (*str < '0' || *str > '9'))
				message_error();
			if (*str)
				str++;
		}
	}
}

void	ft_check_double_nbr(t_stack *s, char **av)
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
			{
				ft_free(av);
				free(s->stack_a);
				message_error();
			}
			j++;
		}
		i++;
	}
}
