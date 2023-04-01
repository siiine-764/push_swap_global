/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools_rules.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:52:41 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/01 01:20:45 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_stack *stck)
{
	long long	down_a;
	int i = 0;
	int			lg = stck->top_a;

	down_a = stck->stack_a[0];
	while (i < lg)
	{
		stck->stack_a[i] = stck->stack_a[i + 1];
		i++;
	}
	stck->stack_a[stck->top_a] = down_a;
		printf("ra\n");

}

void	ft_rb(t_stack *stck)
{
	long long	down_b;
	int			i = 0;
	int			lg = stck->top_b;

	down_b = stck->stack_b[0];
	while (i < lg)
	{
		stck->stack_b[i] = stck->stack_b[i + 1];
		i++;
	}
	stck->stack_b[stck->top_b] = down_b;
	printf("rb\n");

}

void	ft_rra(t_stack *stck)
{
	long long top_a;

	top_a = stck->stack_a[stck->top_a];
	int	lg = stck->top_a + 1;
	while (lg--)
	{
		stck->stack_a[lg] = stck->stack_a[lg - 1];
	}
	stck->stack_a[0] =top_a;
	printf("rra\n");


}

void	ft_rrb(t_stack *stck)
{
	long long top_b;
	
	top_b = stck->stack_b[stck->top_b];
	int	lg = stck->top_b + 1;
	while (lg--)
	{
		stck->stack_b[lg] = stck->stack_b[lg - 1];
	}
	stck->stack_b[0] =top_b;
	printf("rrb\n");

}