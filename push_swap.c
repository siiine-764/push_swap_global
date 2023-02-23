/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:49:13 by mayache-          #+#    #+#             */
/*   Updated: 2023/02/23 22:27:16 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void fill_stack(char **a, t_stack s)
{
	while (a[s.top])
	{
		s.stack[s.top] = ft_atoi(a[s.top]);
		// printf("%lld", s.stack[i]);
		if ((s.stack[s.top]) < MIN_INT || s.stack[s.top] > MAX_INT)
			ft_message_error_integer();
		s.top++;
	}
}

char **put_nbr_array(char **av, int ac)
{
	char *tmp_num;
	char **numbers;
	int i;

	i =1;
	tmp_num = malloc(sizeof(char *) * (ac - 1));
	while (av[i]) 
	{
		tmp_num = ft_strjoin((const char *)tmp_num, (const char *)av[i]);
		i++;
		// printf("-->%s<--", tmp_num);
	}
	numbers = ft_split((const char *)tmp_num, ' ');
	// free(tmp_num);
	return (numbers);
}

int main(int ac, char **av)
{
	char	**nmbr;
	t_stack s;

	if (ac == 1)
		ft_message_error_empty();

	// check_argv(ac, av);
	// ft_check_same_nbr(av);

	printf("Hallo leute\n");
	nmbr = put_nbr_array(av, ac);
	 s.stack = malloc(sizeof(int) * (ac + 1));
	fill_stack(nmbr, s);
	return (0);
}
