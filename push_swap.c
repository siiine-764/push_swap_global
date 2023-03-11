/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:49:13 by mayache-          #+#    #+#             */
/*   Updated: 2023/03/11 16:35:51 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void fill_stack_a(char **a, t_stack *s)
{
	while (a[s->top_a])
	{
		s->stack_a[s->top_a] = ft_atoi(a[s->top_a]);
		if ((s->stack_a[s->top_a]) <= MIN_INT || s->stack_a[s->top_a] >= MAX_INT)
			ft_message_error_integer();
		s->top_a++;
	}
}

void fill_stack_b(char **a, t_stack *s)
{
	while (a[s->top_b])
	{
		s->stack_b[s->top_b] = ft_atoi(a[s->top_b]);
		if ((s->stack_b[s->top_b]) <= MIN_INT || s->stack_a[s->top_b] >= MAX_INT)
			ft_message_error_integer();
		s->top_b++;
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
	t_stack	s;
	int	i = -1;
	if (ac == 1)
		ft_message_error_empty();

	// check_argv(ac, av);
	// ft_check_same_nbr(av);
	
	s.stack_a = malloc(sizeof(long long) * (ac + 1));
	s.stack_b = malloc(sizeof(long long) * (ac + 1));
	nmbr = put_nbr_array(av, ac);
	fill_stack_a(nmbr, &s);
	fill_stack_b(nmbr, &s);
	printf("\nA\tB\n");
	while (s.stack_a[++i])
	{
		printf("%lld\t", s.stack_a[i]);
		printf("%lld", s.stack_b[i]);
		printf("\n");
	}
	printf("=\t=\n");
	i = -1;
	// while (s.stack_b[++i])
	// 	printf("%lld  ", s.stack_b[i]);

	// ft_ss(s);
	ft_pa(s);
	// ft_pb(s);
	i = -1;
	printf("\nA\tB\n");
	while (s.stack_a[++i])
	{
		printf("%lld\t", s.stack_a[i]);
		printf("%lld", s.stack_b[i]);
		printf("\n");
	}
	printf("=\t=\n");
	i = -1;
	// printf("---> B after ft");
	// while (s.stack_b[++i])
	printf("\neverything right\n");
	return (0);
}
