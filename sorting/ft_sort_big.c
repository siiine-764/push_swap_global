/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:46:33 by mayache-          #+#    #+#             */
/*   Updated: 2023/05/05 20:45:22 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_a(t_stack *s)
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
	long	sorted;
	long	*chaos;

	chaos = ft_sort(s);
	while (s->top_a >= 0)
	{
		sorted = ft_find_local(chaos, s->stack_a[0], s->top_a);
		if (sorted <= 10)
			pb(s);
		else if (sorted < 0)
		{
			pb(s);
			rb(s);
		}
		else if (sorted > 10)
			ra(s);
	}
	free(chaos);
	ft_push_a(s);
}

void	ft_extra_big_sort(t_stack *s)
{
	int		sopa;
	long	*chaos;

	chaos = ft_sort(s);
	while (s->top_a >= 0)
	{
		sopa = ft_find_local(chaos, s->stack_a[0], s->top_a);
		if (sopa <= 25)
			pb(s);
		else if (sopa < 0)
		{
			pb(s);
			rb(s);
		}
		else if (sopa > 25)
			ra(s);
	}
	free(chaos);
	ft_push_a(s);
}
