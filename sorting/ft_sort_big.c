/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:46:33 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/15 17:29:13 by mayache-         ###   ########.fr       */
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
		if (location <= (s->top_b / 2))
		{
			while (s->stack_b[0] != biger)
				rb(s);
			pa(s);
		}
		else
		{
			while (s->stack_b[0] != biger)
				rrb(s);
			pa(s);
		}
	}
}

void	ft_big_sort(t_stack *s)
{
	int		range = 0;
	// int		start;
	long	sopa = 0;
	long	*chaos;

	chaos = ft_sort(s);
	// range = 15;
	// start = 0;
	while (s->top_a >= 0)
	{
		sopa = ft_find_local(chaos, s->stack_a[0], s->top_a);
		if (sopa <= 16 + range && sopa >= range)
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
		else if (sopa > 16 + range) 
			ra(s);
	}
	ft_push_a(s);
}


void	ft_extra_big_sort(t_stack *s)
{
	int		range = 0;
	long	sopa = 0;
	long	*chaos;

	chaos = ft_sort(s);
	while (s->top_a >= 0)
	{
		sopa = ft_find_local(chaos, s->stack_a[0], s->top_a);
		if (sopa >= range && sopa <= 31 + range)
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
		else if (sopa > 31 + range) 
			ra(s);
	}
	ft_push_a(s);
}