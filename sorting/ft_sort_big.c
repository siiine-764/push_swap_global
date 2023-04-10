/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:46:33 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/10 01:19:52 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_push_a(t_stack *s)
{
	long long	location;
	long long	biger;

// s->top_b ++;
	while (s->top_b != 0)
	{
		biger = ft_find_biger(s);
		location = ft_find_location(s, biger);
		if (location <= (s->top_b / 2))
		{
			if (s->stack_b[0] == biger)
				rb(s);
				pa(s);
		}
		else if (location > (s->top_b / 2))
		{
			if (s->stack_b[0] == biger)
				rrb(s);
				pa(s);
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
	// if (!chaos)
	// 	printf("Error VIP : cette array n\'est pas remplir\n");
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
		sopa = ft_find_local(chaos, s->stack_a[0]);
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
		// printf("range :%d", range);
	}
	ft_push_a(s);
}

// void	ft_extra_big_sort(t_stack *s)
// {
// 	int			range = 0;
// 	long long	sopa = 0; 
// 	long long	*chaos = ft_sort(s);

// 	while (s->top_a)
// 	{
// 		sopa = ft_find_local(chaos, s->stack_a[0]);
// 		// printf("%lld", sopa);
// 		if (sopa >= range && sopa <= 30 + range)
// 		{
// 			pb(s);
// 			range++;
// 		}
// 		else if (sopa < range)
// 		{
// 			pb(s);
// 			rb(s);
// 			range++;
// 		}
// 		else if (sopa > 30 + range) 
// 			ra(s);
// 	}
// }