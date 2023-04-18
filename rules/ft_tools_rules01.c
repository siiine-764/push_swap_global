/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools_rules01.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:54:18 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/17 23:29:02 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_mssg_error1(long pop)
{
	if (pop == -1)
		message_error();
}

void	ft_mssg_error2(t_stack *s)
{
	if (s->top_a < 0)
		message_error();
}

void	ft_mssg_error3(t_stack *s)
{
	if (s->top_b < 0)
		message_error();
}

void	ft_sa(t_stack *s)
{
	long	swap_a;

	swap_a = s->stack_a[0];
	s->stack_a[0] = s->stack_a[1];
	s->stack_a[1] = swap_a;
}

void	ft_sb(t_stack *s)
{
	long	swap_b;

	swap_b = s->stack_b[0];
	s->stack_b[0] = s->stack_b[1];
	s->stack_b[1] = swap_b;
}
