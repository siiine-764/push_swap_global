/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:42:27 by mayache-          #+#    #+#             */
/*   Updated: 2023/03/19 15:26:58 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_pb(t_stack *stck)
{
	long long	pop_a;
	int			i = 0;

	pop_a = stck->stack_a[0];
	// printf("---> %lld", pop_a);
	// i = stck->top_a + 1;
	while (stck->stack_a[i])
	{
		stck->stack_a[i] = stck->stack_a[i + 1];
		i++;
	}
	stck->top_a--;
	stck->top_b++;
	stck->stack_b[stck->top_b] = pop_a;
	// ft_sproximo_b(stck, ft_pop_a(stck));
	printf("\n\t\t.pb.\t");
}

void	ft_pa(t_stack *stck)
{
	long long	pop_b;
	int			i = 0;

	pop_b = stck->stack_b[0];
	// printf("---> %lld", pop_b);
	// i = stck->top_b + 1;
	while (stck->stack_b[i])
	{
		stck->stack_b[i] = stck->stack_b[i + 1];
		i++;
	}
	stck->top_b--;
	stck->top_a++;
	stck->stack_a[stck->top_a] = pop_b;
	printf("\n\t\t.pa.\t");
}