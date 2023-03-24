/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:39:05 by mayache-          #+#    #+#             */
/*   Updated: 2023/03/24 23:20:50 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack *stck)
{
	long long	down_a;
	int			lg = stck->top_a;

	down_a = stck->stack_a[stck->top_a];
	while (lg >= 0)
	{
		stck->stack_a[lg] = stck->stack_a[lg - 1];
		lg--;
	}
	stck->stack_a[0] = down_a;
		printf("rra\n");

}

void	rb(t_stack *stck)
{
	long long	down_b;
	int			lg = stck->top_b;

	down_b = stck->stack_b[stck->top_b];
	while (lg >= 0)
	{
		stck->stack_b[lg] = stck->stack_b[lg - 1];
		lg--;
	}
	stck->stack_b[0] = down_b;
		printf("rrb\n");

}

void	rrr(t_stack *stck)
{
	ft_rra(stck);
	ft_rrb(stck);
		printf("rrr\n");

}