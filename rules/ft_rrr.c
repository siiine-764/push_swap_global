/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:39:05 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/04 01:09:34 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *stck)
{
	long long top_a;

	top_a = stck->stack_a[stck->top_a];
	int	lg = stck->top_a + 1;
	while (lg--)
	{
		stck->stack_a[lg] = stck->stack_a[lg - 1];
	}
	stck->stack_a[0] =top_a;
	write(1, "rra\n", 4);
}

void	rrb(t_stack *stck)
{
	long long top_b;
	
	top_b = stck->stack_b[stck->top_b];
	int	lg = stck->top_b + 1;
	while (lg--)
	{
		stck->stack_b[lg] = stck->stack_b[lg - 1];
	}
	stck->stack_b[0] =top_b;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *stck)
{
	ft_rra(stck);
	ft_rrb(stck);
	write(1, "rrr\n", 4);
}