/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:44:53 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/15 01:44:13 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	ft_find_minor(t_stack *s)
{
	int 	k = 0;
	int 	index_minor = 0;
	long	minor;
	
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
	return  (index_minor);
}

long	ft_find_biger(t_stack *stck)
{
	int		i;
	long	biger;

	i = 0;
	biger = stck->stack_b[0];
	// printf("inside ft find  biger : %ld\n", biger);
	while (i <= stck->top_b)
	{
		if (biger < stck->stack_b[i])
		{
			biger = stck->stack_b[i];
			// printf("inside if inside ft find  biger : %ld\n", biger);
		}
		i++;
	}
	return (biger);
}

long ft_find_location(t_stack *stck, long nbr)
{
	int	i;

	i = 0;
	while (i <= stck->top_b)
	{
		if (stck->stack_b[i] == nbr)
			return (i);
		i++;
	}
	return (-1);
}

long ft_find_local(long *chaos, long nbr, int len)
{
	int i;

	i = 0;
	while (i <= len)
	{
		if (chaos[i] == nbr)
			return (i);
		i++;
	}
	return (-1);
}

long	*ft_sort(t_stack *stck)
{
	int		i;
	long	nbr;
	long	*chaos;
	//chic neat

	chaos =  ft_calloc(1, sizeof(long *) * (stck->top_a));
	// if (!chaos)
	// 	printf("Error VIP : cette array n\'est pas remplir\n");
	i = 0;
	while (i < stck->top_a)
	{
		chaos[i] = stck->stack_a[i];
		i++;
	}
	i = 0;
	while (i < stck->top_a - 1)
	{
		if (chaos[i] > chaos[i + 1])
		{
			nbr = chaos[i];
			chaos[i] = chaos[i + 1];
			chaos[i + 1] = nbr;
			i = 0;
		}
		else
			i++;
	}
	return (chaos);
}
