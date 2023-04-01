/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:44:53 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/01 01:45:12 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_find_minor(t_stack *s)
{
	int k = -1;
	int index_minor = -1;
	int minor = -1;
	
	minor = s->stack_a[0];
	while (++k <= s->top_a)
	{
		if (minor > s->stack_a[k])
		{
			index_minor = k;
			minor = s->stack_a[k];
		}
	}
	return  (index_minor);
}

long long ft_find_biger(t_stack *stck)
{
	int			i;
	long long	biger;

	biger = stck->stack_b[0];
	i = -1;
	while(++i < stck->top_b + 1)
	{
		if (biger < stck->stack_b[i])
			biger = stck->stack_b[i];	
	}
	return (biger);
}

long long ft_find_location(t_stack *stck, long long nbr)
{
	int	i;

	i = -1;
	while (++i < stck->top_b)
		if (stck->stack_b[i] == nbr)
			return (i);
	return (-1);
}