/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:42:27 by mayache-          #+#    #+#             */
/*   Updated: 2023/03/13 21:43:26 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_pb(t_stack *stck)
{
	ft_sproximo_b(stck, ft_pop_a(stck));
	 printf("\n\t.pb.\t\n");
}

void	ft_pa(t_stack *t_stck)
{
	ft_sproximo_a(t_stck, ft_pop_b(t_stck));
	printf("\n\t.pa.\t\n");
}