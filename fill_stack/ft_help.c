/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:30:11 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/19 23:24:22 by mayache-         ###   ########.fr       */
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

char	*ft_copy(char *tmp_num, char *tmp_num_cpy, t_stack *p)
{
	int	ln;

	ln = 0;
	p->len = 0;
	ft_len(tmp_num, p);
	tmp_num_cpy = ft_calloc(1, sizeof(char *) * (p->len + 1));
	while (tmp_num[ln] != '\0')
	{
		tmp_num_cpy[ln] = tmp_num[ln];
		ln++;
	}
	return (tmp_num_cpy);
}
