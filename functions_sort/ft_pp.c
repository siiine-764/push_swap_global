/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:42:27 by mayache-          #+#    #+#             */
/*   Updated: 2023/03/16 00:39:30 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_pb(t_stack *stck)
{
	ft_sproximo_b(stck, ft_pop_a(stck));
	printf("\n\t\t.pb.\t");
}

void	ft_pa(t_stack *stck)
{
	ft_sproximo_a(stck, ft_pop_b(stck));
	printf("\n\t\t.pa.\t");
}