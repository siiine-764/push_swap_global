/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 22:16:41 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/15 12:04:04 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_sorted(long *arr, int size)
{
	int i = 0;
	while (i <= size)
	{
		if (arr[i] > arr[i + 1])
			return 0;
		else
			i++;
	}
	return 1;
}