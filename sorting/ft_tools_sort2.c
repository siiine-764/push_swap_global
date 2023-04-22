/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools_sort2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 22:32:27 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/22 01:08:07 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_part1(int start, t_stack *s)
{
	pb(s);
	start++;
}

void	ft_part2(t_stack *s)
{
	pb(s);
	rb(s);
}

long	ft_find_minor(t_stack *s)
{
	int		k;
	int		index_minor;
	long	minor;

	k = 0;
	index_minor = 0;
	minor = s->stack_a[0];
	while (k <= s->top_a)
	{
		if (minor > s->stack_a[k])
		{
			index_minor = k;
			minor = s->stack_a[k];
		}
		k++;
	}
	return (index_minor);
}
