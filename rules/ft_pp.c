/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:42:27 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/04 01:09:02 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stack *stck)
{
	long long	pop_a;
	int			i = 0;

	pop_a = stck->stack_a[0];
	while (stck->stack_a[i])
	{
		stck->stack_a[i] = stck->stack_a[i + 1];
		i++;
	}
	stck->top_a--;
	stck->top_b++;
	stck->stack_b[stck->top_b] = pop_a;
	write(1, "pb\n", 3);
}

void	pa(t_stack *stck)
{
	long long	pop_b;
	int			i = 0;

	pop_b = stck->stack_b[0];
	while (stck->stack_b[i])
	{
		stck->stack_b[i] = stck->stack_b[i + 1];
		i++;
	}
	stck->top_b--;
	stck->top_a++;
	stck->stack_a[stck->top_a] = pop_b;
	write(1, "pa\n", 3);
}