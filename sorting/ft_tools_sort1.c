/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools_sort1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:44:53 by mayache-          #+#    #+#             */
/*   Updated: 2023/05/02 03:18:00 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	ft_find_biger(t_stack *s)
{
	int		i;
	long	biger;

	i = -1;
	biger = s->stack_b[0];
	while (++i <= s->top_b)
		if (biger <= s->stack_b[i])
			biger = s->stack_b[i];
	return (biger);
}

long	ft_find_location(t_stack *s, long nbr)
{
	int	i;

	i = -1;
	while (++i <= s->top_b)
		if (s->stack_b[i] == nbr)
			return (i);
	return (-1);
}

long	ft_find_local(long *chaos, long top_a, int len)
{
	int	i;

	i = -1;
	while (++i <= len)
		if (chaos[i] == top_a)
			return (i);
	return (-1);
}

long	*ft_sort(t_stack *s)
{
	int		i;
	long	nbr;
	long	*chaos;

	i = 0;
	chaos = ft_calloc(1, sizeof(long *) * (s->top_a + 1));
	while (i <= s->top_a)
	{
		chaos[i] = s->stack_a[i];
		i++;
	}
	i = 0;
	while (i <= s->top_a - 1)
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
