/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:46:33 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/15 01:28:40 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_push_a(t_stack *s)
{
	long	location;
	long	biger;

	while (s->top_b >= 0)
	{
		biger = ft_find_biger(s);
		location = ft_find_location(s, biger);
		
		// printf("---> location : %ld\n",location);
		// printf("bigger = %ld\n", biger);
		// sleep(1);
		if (location <= (s->top_b / 2))
		{
			if (s->stack_b[0] != biger)
			{
				rb(s);
			}
			else
			pa(s);
		}
		else if(location > (s->top_b / 2))
		{
			if (s->stack_b[0] != biger)
			{
				rrb(s);
				// printf("Down s->stack_b[0] = %ld  || biger = %ld \n", s->stack_b[0], biger);
				// sleep(1);
			}
			else
			pa(s);
		}
	}
}

void	ft_big_sort(t_stack *s)
{
	int		range = 0;
	long	sopa = 0;
	long	*chaos = ft_sort(s);
		// printf("before --> len : %d\n", s->top_a);
	// print_stacks(s);

		// print_stacks(s);

	// printf("----> A top %d\n", s->top_a);
	// printf("----> A nmbr a%d\n", s->n_a);
	// printf("----> A len %d\n", s->len);
	while (s->top_a >= 0)
	{
		// printf("----> inside while A top %d\n", s->top_a);
		sopa = ft_find_local(chaos, s->stack_a[0], s->top_a);
		// printf("%lld\n",sopa);
		if (sopa >= range && sopa <= 15 + range)
		{
			pb(s);
			range++;
		}
		else if (sopa < range)
		{
			pb(s);
			rb(s);
			range++;
		}
		else if (sopa > 15 + range) 
			ra(s);
	}
	ft_push_a(s);
}


void	ft_extra_big_sort(t_stack *s)
{
	int		range = 0;
	long	sopa = 0;
	long	*chaos = ft_sort(s);
		// printf("before --> len : %d\n", s->top_a);
	// print_stacks(s);

		// print_stacks(s);

	// printf("----> A top %d\n", s->top_a);
	// printf("----> A nmbr a%d\n", s->n_a);
	// printf("----> A len %d\n", s->len);
	while (s->top_a >= 0)
	{
		// printf("----> inside while A top %d\n", s->top_a);
		sopa = ft_find_local(chaos, s->stack_a[0], s->top_a);
		// printf("%lld\n",sopa);
		if (sopa >= range && sopa <= 30 + range)
		{
			pb(s);
			range++;
		}
		else if (sopa < range)
		{
			pb(s);
			rb(s);
			range++;
		}
		else if (sopa > 30 + range) 
			ra(s);
	}
	ft_push_a(s);
}