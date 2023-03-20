/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:47:09 by mayache-          #+#    #+#             */
/*   Updated: 2023/03/20 13:21:53 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_sa(t_stack *s)
{
	long long swap_a;

	swap_a = s->stack_a[0];
	s->stack_a[0] = s->stack_a[1];
	s->stack_a[1] = swap_a;
}

void ft_sb(t_stack *s)
{
	long long swap_b;

	swap_b = s->stack_b[0];
	s->stack_b[0] = s->stack_b[1];
	s->stack_b[1] = swap_b;
}

void sa(t_stack *s)
{
	long long swap_a;

	swap_a = s->stack_a[0];
	s->stack_a[0] = s->stack_a[1];
	s->stack_a[1] = swap_a;
		printf("sa\n");

}

void sb(t_stack *s)
{
	long long swap_b;

	swap_b = s->stack_b[0];
	s->stack_b[0] = s->stack_b[1];
	s->stack_b[1] = swap_b;
		printf("sb\n");

}

void ss(t_stack *s)
{
	ft_sa(s);
	ft_sb(s);
		printf("ss\n");

}