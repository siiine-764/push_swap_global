/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_message_errors.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:10:01 by mayache-          #+#    #+#             */
/*   Updated: 2023/02/22 00:49:32 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_message_error_space(void)
{
	write(1, "error 💀\n", 11);
	exit(1);
}

void	ft_message_error(void)
{
	write(1, "..error 💀\n", 13);
	exit(1);
}

void	ft_message_error_integer(void)
{
	write(1, "error max or min intager ☃︎\n", 33);
	exit(1);
}

void	ft_message_error_nbr(void)
{
	write(1, "error nbr 💀\n", 15);
	exit(1);
}

void	ft_message_error_empty(void)
{
	write(1, "empty input\n", 12);
	exit(1);
}