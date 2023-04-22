/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:30:11 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/22 01:03:32 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_len(char *tmp_num, t_stack *p)
{
	int	j;

	j = 0;
	while (tmp_num[j] != '\0')
	{
		if (tmp_num[j] == ' ')
			p->len++;
		if (tmp_num[j] == ' ' && tmp_num[j + 1] == '\0')
			p->len--;
		j++;
	}
}

void	ft_free(char **numbers)
{
	int	i;

	i = 0;
	while (numbers[i])
	{
		free(numbers[i]);
		i++;
	}
	free(numbers);
}
