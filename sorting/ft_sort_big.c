/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:46:33 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/30 16:17:37 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include<stdio.h>

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
	int		end;
	int		start;
	long	sopa;
	long	*chaos;

	chaos = ft_sort(s);
	end = 10;
	start = 0;
	while (s->top_a >= 0)
	{
		sopa = ft_find_local(chaos, s->stack_a[0], s->top_a);
		if (sopa >= start && sopa <= end)
			pb(s);
		else if (sopa < start)
		{
			pb(s);
			rb(s);
		}
		else if (sopa > end)
			ra(s);
	}
	ft_push_a(s);
}

void	ft_extra_big_sort(t_stack *s)
{
	int		end;
	int		start;
	int	sopa;
	long	*chaos;

	chaos = ft_sort(s);
	end = 25;
	start = 0;
	while (s->top_a >= 0)
	{
		// // sopa = ft_find_local(chaos, s->stack_a[0], s->top_a);
		// // printf("%d\n",sopa);
		// // exit(0);
		// printf("--> top : %d start: %ld, top_a: %ld\n", s->top_a, chaos[start], s->stack_a[s->top_a]);
		// if (s->stack_a[s->top_a] >= chaos[start] && s->stack_a[s->top_a] <= chaos[start])
		// {
		// 	pb(s);
		// 	end++;
		// 	start++;
		// }
		// else if (s->stack_a[s->top_a] < chaos[start])
		// {
		// 	pb(s);
		// 	rb(s);
		// 	end++;
		// 	start++;
		// }
		// else if (s->stack_a[s->top_a] > chaos[start])
		// 	ra(s);
		sopa = ft_find_local(chaos, s->stack_a[0], s->top_a);
		if (sopa >= start && sopa <= end)
			pb(s);
		else if (sopa < start)
		{
			pb(s);
			rb(s);
		}
		else if (sopa > end)
			ra(s);
	}
	ft_push_a(s);
}
