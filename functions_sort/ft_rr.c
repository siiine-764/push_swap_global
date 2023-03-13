/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:37:56 by mayache-          #+#    #+#             */
/*   Updated: 2023/03/13 21:38:50 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_stack *stck)
{
	long long top_a;
	int i = 0;
	top_a = stck->stack_a[0];
	int	lg = stck->top_a;
	// lg--;
	while (lg >= i)
	{
		stck->stack_a[i] = stck->stack_a[i + 1];
		i++;
	}
	stck->stack_a[stck->top_a] =top_a;
	printf("\n   .ra.   \n");
}

void	ft_rb(t_stack *stck)
{
	long long top_b;
	int i = 0;
	top_b = stck->stack_b[0];
	int	lg = stck->top_b;
	// lg--;
	while (lg >= i)
	{
		stck->stack_b[i] = stck->stack_b[i + 1];
		i++;
	}
	stck->stack_b[stck->top_b] =top_b;
	printf("\n   .rb.   \n");
}

void	ft_rr(t_stack *stck)
{
	ft_ra(stck);
	ft_rb(stck);
	printf("\n   .rr.   \n");
}