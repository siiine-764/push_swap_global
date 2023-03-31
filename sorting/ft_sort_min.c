/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 00:36:48 by mayache-          #+#    #+#             */
/*   Updated: 2023/03/31 01:55:08 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long long ft_find_minor(t_stack *s)
{
	int k = -1;
	int minor = -1;
	
	minor = s->stack_a[0];

	while (++k < s->top_a + 1)
	{
		if (minor < s->stack_a[k])
		{
			minor = s->stack_a[k];
			// index_minor = k;
			// printf("----%d\n", index_minor);
		}
	}
	return  (minor);
}
void	ft_sort_three(t_stack *s)
{
	int i = -1;
	// int j = -1;
	// int index = -1;
	long long biger;
	long long minor;


	 i = -1;

	while (++i < s->top_a + 1)
	{
		biger = ft_find_biger(s);
		minor = ft_find_minor(s);
	// k = 0;
	// 	if (biger == s->stack_a[index] && index == 0)
	// 			ra(s);
	// else if (biger == s->stack_a[index] && index == 1)
	// {
	// 	sa(s);
	// 	ra(s);
	// }
		
	// if (minor == s->stack_a[index_minor] && index_minor == 1)
	// 	sa(s);
	// else if (minor == s->stack_a[index_minor] && index_minor == 2)
	// 	rra(s);
	}
}