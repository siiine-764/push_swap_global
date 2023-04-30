/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools_sort2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 22:32:27 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/30 15:10:30 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_part1(int start,int end, t_stack *s)
{
	pb(s);
	start++;
	end++;
}

void	ft_part2(int start,int end, t_stack *s)
{
	pb(s);
	rb(s);
	start++;
	end++;
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
