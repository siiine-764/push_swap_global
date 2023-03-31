/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:39:05 by mayache-          #+#    #+#             */
/*   Updated: 2023/03/30 20:56:53 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *stck)
{
	long long	down_a;
	int i = 0;
	int			lg = stck->top_a;

	down_a = stck->stack_a[0];
	while (i < lg)
	{
		stck->stack_a[i] = stck->stack_a[i + 1];
		i++;
	}
	stck->stack_a[stck->top_a] = down_a;
		printf("rra\n");

}

void	rrb(t_stack *stck)
{
	long long	down_b;
	int			i = 0;
	int			lg = stck->top_b;

	down_b = stck->stack_b[0];
	while (i < lg)
	{
		stck->stack_b[i] = stck->stack_b[i + 1];
		i++;
	}
	stck->stack_b[stck->top_b] = down_b;
	printf("rrb\n");

}

void	rrr(t_stack *stck)
{
	ft_rra(stck);
	ft_rrb(stck);
	printf("rrr\n");

}