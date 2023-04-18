/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:42:27 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/17 19:57:46 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stack *s)
{
	long	pop_a;
	int		i;

	i = -1;
	pop_a = s->stack_a[0];
	ft_mssg_error1(pop_a);
	ft_mssg_error2(s);
	while (++i < s->len)
		s->stack_a[i] = s->stack_a[i + 1];
	s->top_a--;
	i = s->n_b;
	while (i > 0)
	{
		s->stack_b[i] = s->stack_b[i - 1];
		i--;
	}
	s->top_b++;
	s->n_b++;
	s->stack_b[0] = pop_a;
	write(1, "pb\n", 3);
}

void	pa(t_stack *s)
{
	long	pop_b;
	int		i;

	i = -1;
	pop_b = s->stack_b[0];
	ft_mssg_error1(pop_b);
	ft_mssg_error3(s);
	while (++i < s->top_b)
		s->stack_b[i] = s->stack_b[i + 1];
	s->top_b--;
	i = s->top_a;
	while (i > 0)
	{
		s->stack_a[i] = s->stack_a[i - 1];
		i--;
	}
	s->top_a++;
	s->stack_a[0] = pop_b;
	write(1, "pa\n", 3);
}
