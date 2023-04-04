/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 00:36:48 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/02 23:05:09 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_three(t_stack *s)
{
	if ((s->stack_a[0] < s->stack_a[1])
		&& (s->stack_a[1] > s->stack_a[2]))
	{
		rra(s);
		if (s->stack_a[0] > s->stack_a[1])
			sa(s);
	}
	if ((s->stack_a[0] > s->stack_a[1]))
	{
		 if (s->stack_a[0] > s->stack_a[2])
		 {
			// printf("---> [0] %lld\n",s->stack_a[0]);
			// printf("---> [1] %lld\n",s->stack_a[1]);
			// printf("---> [2] %lld\n",s->stack_a[2]);
			ra(s);
		 }
		 if (s->stack_a[1] > s->stack_a[2])
		 {
			// printf("---> [0] %lld\n",s->stack_a[0]);
			// printf("---> [1] %lld\n",s->stack_a[1]);
			// printf("---> [2] %lld\n",s->stack_a[2]);
			ra(s);
		 }
		 if (s->stack_a[0] > s->stack_a[1])
		 {
			sa(s);
			// printf("---> [0] %lld\n",s->stack_a[0]);
			// printf("---> [1] %lld\n",s->stack_a[1]);
			// printf("---> [2] %lld\n",s->stack_a[2]);
		 }
		// if (s->stack_a[0] > s->stack_a[2])
		// 	rra(s);
	}
}

void	ft_sort_four(t_stack *s)
{
	long long index_minor;
	long long	nbr_small;

	index_minor = ft_find_minor(s);
	nbr_small = s->stack_a[index_minor];
	// printf("\nindex : %lld .  ", index_minor);
	// printf("nbr : %lld", nbr_small);
	while (s->stack_a[0] != nbr_small)
	{
		// printf("%lld", nbr_small);
		if (index_minor <= ((s->top_a ) / 2))
			ra(s);
		else if (index_minor > ((s->top_a) / 2))
			rra(s);
	}
	pb(s);
	ft_sort_three(s);
	pa(s);
}

void	ft_sort_five(t_stack *s)
{
	int index_minor;
	int	nbr_small;

	index_minor = ft_find_minor(s);
	nbr_small = s->stack_a[index_minor];
	// printf("\nindex : %d .  ", index_minor);
	// printf("nbr : %d", nbr_small);
	while (s->stack_a[0] != nbr_small)
	{
		if (index_minor <= ((s->top_a ) / 2))
			ra(s);
		else if (index_minor > ((s->top_a) / 2))
			rra(s);
	}
	pb(s);
	ft_sort_four(s);
	pa(s);
}