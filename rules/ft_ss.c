/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:47:09 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/10 21:00:45 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_sa(t_stack *s)
{
	long swap_a;

	swap_a = s->stack_a[0];
	s->stack_a[0] = s->stack_a[1];
	s->stack_a[1] = swap_a;
}

void ft_sb(t_stack *s)
{
	long swap_b;

	swap_b = s->stack_b[0];
	s->stack_b[0] = s->stack_b[1];
	s->stack_b[1] = swap_b;
}

void sa(t_stack *s)
{
	long swap_a;

	swap_a = s->stack_a[0];
	s->stack_a[0] = s->stack_a[1];
	s->stack_a[1] = swap_a;
	write(1,"sa\n", 3);

}

void sb(t_stack *s)
{
	long swap_b;

	swap_b = s->stack_b[0];
	s->stack_b[0] = s->stack_b[1];
	s->stack_b[1] = swap_b;
	write(1, "sb\n", 3);

}

void ss(t_stack *s)
{
	ft_sa(s);
	ft_sb(s);
	write(1, "ss\n", 3);

}