/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:37:57 by mayache-          #+#    #+#             */
/*   Updated: 2023/02/19 18:48:20 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
// #include "./libft/libft.h"

// void	ft_sa()
// {
// }


int	main(int ac, char **av)
{
	int *myarray;
	int i = 1;
	
	while (av[i])
	{	
		printf("%d", myarray[i]);
		i++;
	}
}
