/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:42:27 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/11 20:59:20 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stack *stck)
{
	long	pop_a;
	int			i = 0;

	pop_a = stck->stack_a[0];
	if (pop_a == -1)
	{
		printf("Error VIP: stack underflow");
		exit(1);
	}

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
	printf("stck->topa %d\n", stck->top_b);
	exit(0);
	
	// long	pop_b;
	// int			i = 0;

	// pop_b = stck->stack_b[0];
	// if (pop_b == -1)
	// {
	// 	printf("Error VIP: stack underflow");
	// 	exit(1);
	// }
	// while (stck->stack_b[i])
	// {
	// 	stck->stack_b[i] = stck->stack_b[i + 1];
	// 	i++;
	// }
	// stck->top_b++;
	// stck->top_a--;
	// stck->stack_a[stck->top_a] = pop_b;
	write(1, "pa\n", 3);
}