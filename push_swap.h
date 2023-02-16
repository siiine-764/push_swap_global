/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:49:10 by mayache-          #+#    #+#             */
/*   Updated: 2023/02/16 19:08:54 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

#define MAX_INT 2147483647
#define MIN_INT -2147483648

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "./libft/libft.h"

typedef struct info_nbr
{
	long	*nbrs;
}	t_info_nbr;

/// ft_messages_errors //
void	ft_message_error_space(void);
void	ft_message_error(void);
void	ft_message_error_integer(void);
void	ft_message_error_nbr(void);
void	ft_message_error_empty(void);
#endif