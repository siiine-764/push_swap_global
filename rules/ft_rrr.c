/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:39:05 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/10 23:01:26 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *stck)
{
	int top = stck->top_a + 1;
	int value = stck->stack_a[stck->top_a];
	// int i = 0;

					
					
	// printf("before: \n");			
	// 	print_stacks(stck);

	while (top != 0)
	{
		stck->stack_a[top] = stck->stack_a[top - 1];
		top--;
	}
	stck->stack_a[0] = value;	
	// long top_a;
	// printf("after: \n");
	// 				print_stacks(stck);

	// top_a = stck->stack_a[stck->top_a];
	// int	lg = stck->top_a + 1;
	// while (lg--)
	// {
	// 	stck->stack_a[lg] = stck->stack_a[lg - 1];
	// }
	// stck->stack_a[0] =top_a;
	write(1, "rra\n", 4);
}

void	rrb(t_stack *stck)
{
	int top = stck->top_b + 1;
	int value = stck->stack_b[stck->top_b];

	while (top != 0)
	{
		stck->stack_b[top] = stck->stack_b[top - 1];
		top--;
	}
	stck->stack_a[0] = value;	
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *stck)
{
	ft_rra(stck);
	ft_rrb(stck);
	write(1, "rrr\n", 4);
}