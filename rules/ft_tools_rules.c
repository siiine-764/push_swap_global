/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools_rules.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:52:41 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/15 01:36:13 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_stack *s)
{
	long	down_a;
	int i = 0;
	int			lg = s->top_a;

	down_a = s->stack_a[0];
	while (i < lg)
	{
		s->stack_a[i] = s->stack_a[i + 1];
		i++;
	}
	s->stack_a[s->top_a] = down_a;
}

void	ft_rb(t_stack *s)
{
	long	down_b;
	int			i = 0;
	int			lg = s->top_b;

	down_b = s->stack_b[0];
	while (i < lg)
	{
		s->stack_b[i] = s->stack_b[i + 1];
		i++;
	}
	s->stack_b[s->top_b] = down_b;
}

void	ft_rra(t_stack *s)
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
}

void	ft_rrb(t_stack *s)
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
}