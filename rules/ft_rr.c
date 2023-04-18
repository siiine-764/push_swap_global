/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:37:56 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/17 19:58:20 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack *s)
{
	long	down_a;
	int		i;
	int		lg;

	i = 0;
	lg = s->top_a;
	down_a = s->stack_a[0];
	while (i < lg)
	{
		s->stack_a[i] = s->stack_a[i + 1];
		i++;
	}
	s->stack_a[s->top_a] = down_a;
	write(1, "ra\n", 3);
}

void	rb(t_stack *s)
{
	long	down_b;
	int		i;
	int		lg;

	i = 0;
	lg = s->top_b;
	down_b = s->stack_b[0];
	while (i < lg)
	{
		s->stack_b[i] = s->stack_b[i + 1];
		i++;
	}
	s->stack_b[s->top_b] = down_b;
	write(1, "rb\n", 3);
}

void	rr(t_stack *s)
{
	ft_ra(s);
	ft_rb(s);
	write(1, "rr\n", 3);
}
