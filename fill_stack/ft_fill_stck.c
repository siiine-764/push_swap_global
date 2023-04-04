/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stck.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:59:46 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/03 23:25:13 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	fill_stack_a(char **a, t_stack *s)
{
	s->top_a = 0;
	while (a[s->top_a])
	{
		s->stack_a[s->top_a] = ft_atoi(a[s->top_a]);
		if ((s->stack_a[s->top_a]) < MIN_INT || s->stack_a[s->top_a] > MAX_INT)
			ft_message_error_integer();
		s->top_a++;
	}
}

char	**put_nbr_array(char **av, int ac, t_stack *p)
{
	char	*tmp_num;
	// char	*test;
	char	**numbers;
	int i;

	i = 1;
	tmp_num = malloc(sizeof(char *) * (ac - 1));
	p->size = 0;
	while (av[i])
	{
		tmp_num = ft_strjoin(tmp_num, av[i]);
		tmp_num = ft_strjoin(tmp_num, " ");
		i++;
		p->size++;
		p->len++;
	}
	numbers = ft_split((const char *)tmp_num, ' ');
	free(tmp_num);
	return (numbers);
}