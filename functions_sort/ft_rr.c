/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:37:56 by mayache-          #+#    #+#             */
/*   Updated: 2023/03/16 01:08:11 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_stack *stck)
{
	long long top_a;
	top_a = stck->stack_a[stck->top_a];

	int	lg = stck->top_a + 1;
	while (lg--)
	{
		stck->stack_a[lg] = stck->stack_a[lg - 1];
	}
	stck->stack_a[0] =top_a;
	printf("\n\t\t.ra.\t");
}

void	ft_rb(t_stack *stck)
{
	long long top_b;
	
	top_b = stck->stack_b[stck->top_b];
	int	lg = stck->top_b + 1;
	while (lg--)
	{
		stck->stack_b[lg] = stck->stack_b[lg - 1];
	}
	stck->stack_b[0] =top_b;
	printf("\n\t\t.rb.\t");
}

void	ft_rr(t_stack *stck)
{
	ft_ra(stck);
	ft_rb(stck);
	printf("\n\t\t.rr.\t");
}