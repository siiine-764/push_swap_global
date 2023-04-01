/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:46:33 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/01 00:47:56 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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