/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:46:31 by mayache-          #+#    #+#             */
/*   Updated: 2023/03/10 19:49:48 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_sb(t_stack s)
{
	long long swap_b;

	swap_b = s.stack_b[0];
	s.stack_b[0] = s.stack_b[1];
	s.stack_b[1] = swap_b;
}