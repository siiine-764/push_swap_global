/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 10:47:47 by mayache-          #+#    #+#             */
/*   Updated: 2023/05/02 02:13:12 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
long	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	res;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (str[i] == '0')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		res = (res * 10) + str[i++] - '0';
	return (res * sign);
}
