/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stck.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:59:46 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/19 01:54:31 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void	fill_stack_a(char **a, t_stack *s)
{
	printf("------>>%d\n", s->len);
	while (++s->top_a <= s->len)
	{
		s->stack_a[s->top_a] = ft_atoi(a[s->top_a]);
		if ((s->stack_a[s->top_a]) < MIN_INT || s->stack_a[s->top_a] > MAX_INT)
			message_error();
	}
	s->top_a--;
}

char	**put_nbr_array(char **av, int ac, t_stack *p)
{
	char	*tmp_num;
	char	**numbers;
	char	*tmp_num_cpy;
	int		i;

	i = 1;
	tmp_num_cpy = 0;
	tmp_num = ft_calloc(1, sizeof(char *) * (ac - 1));
	while (av[i] != '\0')
	{
		tmp_num = ft_strjoin(tmp_num, av[i]);
		tmp_num = ft_strjoin(tmp_num, " ");
		i++;
	}
	tmp_num_cpy = ft_copy(tmp_num, tmp_num_cpy, p);
	numbers = ft_split((char *)tmp_num_cpy, ' ');
	free(tmp_num_cpy);
	free(tmp_num);
	return (numbers);
}
