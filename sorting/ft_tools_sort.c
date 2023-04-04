/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:44:53 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/04 00:27:34 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long long	ft_find_minor(t_stack *s)
{
	int k = -1;
	int index_minor = 0;
	int minor;
	
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
	while(++i < stck->top_b)
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
	while (++i < stck->top_b - 1)
		if (stck->stack_b[i] == nbr)
			return (i);
	return (-1);
}

long long ft_find_local(long long *chaos, long long nbr)
{
	// (void)nbr;
	// (void)chaos;
	int i;

	i = 0;
	while (i < 100)
	{
		if (chaos[i] == nbr)
			return (i);
		i++;
	}
	return (-1);
}