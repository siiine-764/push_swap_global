/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:01:54 by mayache-          #+#    #+#             */
/*   Updated: 2023/03/30 23:28:01 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long long ft_find_biger(t_stack *stck)
{
	int			i;
	long long	biger;

	biger = stck->stack_b[0];
	i = -1;
	while(++i < stck->top_b + 1)
	{
		if (biger < stck->stack_b[i])
			biger = stck->stack_b[i];	
	}
	return (biger);
}

long long ft_find_location(t_stack *stck, long long nbr)
{
	int	i;

	i = -1;
	while (++i < stck->top_b)
		if (stck->stack_b[i] == nbr)
			return (i);
	return (-1);
}

void ft_push_stack_a(t_stack *stck)
{
	long long	location;
	long long	biger;

	while (stck->top_b + 1 != 0)
	{
		biger = ft_find_biger(stck);
		location = ft_find_location(stck, biger);
		// printf("biger stack b : %lld\n",biger);
		if (location <= (stck->top_b / 2))
		{
			// printf("top b : %lld\n",stck->stack_b[0]);
			// printf("biger part 1 in stack b : %lld\n",biger);
			while (!(stck->stack_b[0] == biger))
				rb(stck);
			pa(stck);
		}
		else if (location > (stck->top_b / 2))
		{
			// printf("top b : %lld\n",stck->stack_b[0]);
			// printf("biger part 2 in stack b : %lld\n",biger);
			while (!(stck->stack_b[0] == biger))
				rrb(stck);
			// printf("to push%lld\n",stck->stack_b[0]);
			pa(stck);
		}
	}
}