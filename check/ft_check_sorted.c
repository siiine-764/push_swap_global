/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 22:16:41 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/02 22:17:30 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_sorted(long long *arr, int size)
{
	int i = 0;
	while (i < size - 1)
	{
		if (arr[i] > arr[i + 1])
			return 0;
		else
			i++;
	}
	return 1;
}