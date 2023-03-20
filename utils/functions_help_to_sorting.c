/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_help_to_sorting.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:44:33 by mayache-          #+#    #+#             */
/*   Updated: 2023/03/20 13:09:22 by mayache-         ###   ########.fr       */
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
}

void	ft_rra(t_stack *stck)
{
	long long	down_a;
	int			lg = stck->top_a;

	down_a = stck->stack_a[stck->top_a];
	while (lg >= 0)
	{
		stck->stack_a[lg] = stck->stack_a[lg - 1];
		lg--;
	}
	stck->stack_a[0] = down_a;
}

void	ft_rrb(t_stack *stck)
{
	long long	down_b;
	int			lg = stck->top_b;

	down_b = stck->stack_b[stck->top_b];
	while (lg >= 0)
	{
		stck->stack_b[lg] = stck->stack_b[lg - 1];
		lg--;
	}
	stck->stack_b[0] = down_b;
}