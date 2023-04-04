/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:46:33 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/04 01:04:04 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_push_a(t_stack *s)
{
	long long	location;
	long long	biger;

	while (s->top_b)
	{
		biger = ft_find_biger(s);
		location = ft_find_location(s, biger);
		// printf("biger : %lld\n", biger);
		// printf("find location : %lld\n", location);
		if (location <= (s->top_b / 2))
		{
			if (s->stack_b[0] == biger)
				pa(s);
			else
			rb(s);
		}
		else if (location > (s->top_b / 2))
		{
			if (s->stack_b[0] == biger)
				pa(s);
			else
			rrb(s);
		}
	}
}

long long	*ft_sort(t_stack *stck)
{
	int	i;
	long long	nbr;
	long long	*chaos;
	//chic neat

	chaos = malloc(sizeof(long long *) * (stck->top_a));
	if (!chaos)
		printf("Error VIP : cette array n\'est pas remplir\n");
	i = 0;
	while (i < stck->top_a)
	{
		chaos[i] = stck->stack_a[i];
		i++;
	}
	i = 0;
	while (i < stck->top_a - 1)
	{
		if (chaos[i] > chaos[i + 1])
		{
			nbr = chaos[i];
			chaos[i] = chaos[i + 1];
			chaos[i + 1] = nbr;
			i = 0;
		}
		else
			i++;
	}
	return (chaos);
}

void	ft_big_sort(t_stack *s)
{
	int			range = 0;
	long long	sopa = 0; 
	long long	*chaos = ft_sort(s);

	while (s->top_a != 0)
	{
		// printf("A- %lld\n", chaos[s->top_a]);
		// printf("A- %lld\n", s->stack_a[0]);
		sopa = ft_find_local(chaos, s->stack_a[0]);
		// printf("%lld\n", sopa);
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
	int			range = 0;
	long long	sopa = 0; 
	long long	*chaos = ft_sort(s);

	while (s->top_a != 0)
	{
		sopa = ft_find_local(chaos, s->stack_a[0]);
		// printf("%lld", sopa);
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
}