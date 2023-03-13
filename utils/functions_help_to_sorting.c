/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_help_to_sorting.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:44:33 by mayache-          #+#    #+#             */
/*   Updated: 2023/03/13 21:35:19 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long long	ft_pop_a(t_stack *stck)
{
	long long	el;

	el = stck->stack_a[stck->top_a];
	stck->top_a--;
	return (el);
}

void	ft_sproximo_b(t_stack *stck, long long elemento)
{
	stck->top_b++;
	stck->stack_b[stck->top_b] = elemento;	
}

long long	ft_pop_b(t_stack *stck)
{
	long long	el;

	el = stck->stack_b[stck->top_b];
	stck->top_b--;
	return (el);
}

void	ft_sproximo_a(t_stack *stck, long long elemento)
{
	stck->top_a++;
	stck->stack_a[stck->top_a] = elemento;	
}