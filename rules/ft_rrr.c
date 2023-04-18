/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:39:05 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/17 19:58:24 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *s)
{
	int	top;
	int	value;

	top = s->top_a;
	while (top > 0)
	{
		value = s->stack_a[top];
		s->stack_a[top] = s->stack_a[top - 1];
		s->stack_a[top - 1] = value;
		top--;
	}
	write(1, "rra\n", 4);
}

void	rrb(t_stack *s)
{
	int	top;
	int	value;

	top = s->top_b;
	while (top > 0)
	{
		value = s->stack_b[top];
		s->stack_b[top] = s->stack_b[top - 1];
		s->stack_b[top - 1] = value;
		top--;
	}
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *s)
{
	ft_rra(s);
	ft_rrb(s);
	write(1, "rrr\n", 4);
}
