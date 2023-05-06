/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stck.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:59:46 by mayache-          #+#    #+#             */
/*   Updated: 2023/05/05 23:21:43 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	fill_stack_a(char **a, t_stack *s)
{
	while (++s->top_a <= s->len)
	{
		s->stack_a[s->top_a] = ft_atoi(a[s->top_a]);
		if ((s->stack_a[s->top_a]) < INT_MIN || s->stack_a[s->top_a] > INT_MAX)
		{
			ft_free(a);
			free(s->stack_a);
			message_error();
		}
	}
	s->top_a--;
}

char	**put_nbr_array(char **av, int ac, t_stack *p)
{
	char	*tmp_num;
	char	**numbers;
	int		i;

	i = 1;
	tmp_num = ft_calloc(1, sizeof(char *) * (ac - 1));
	while (av[i])
	{
		tmp_num = ft_strjoin(tmp_num, av[i]);
		tmp_num = ft_strjoin(tmp_num, " ");
		i++;
	}
	numbers = ft_split((char *)tmp_num, ' ', p);
	free(tmp_num);
	return (numbers);
}
