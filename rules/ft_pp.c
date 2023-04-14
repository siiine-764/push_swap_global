/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:42:27 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/14 01:43:24 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stack *s)
{
	long	pop_a;

	pop_a = s->stack_a[0];

	// printf("before :\n");
	// 	print_stacks(s);
	// printf("INDEX ZERO IS %ld AND TOP IS %d|||\n", s->stack_b[0], s->top_b);
	// printf("INDEX ZERO IS %ld AND TOP IS %d|||\n", s->stack_a[0], s->top_a);

	// printf("pop a : %ld\n", pop_a);
	// printf("stack b : %ld\n", pop_a);
	// printf("top b: %d\n", s->top_b);
	if (pop_a == -1)
	{
		printf("Error VIP: stack underflow");
		exit(1);
	}
		if (s->top_a < 0)
	{
		printf("Error VIP: s->top a\n");
		exit(1);
	}
	// printf("s -> top a %d\n", s->top_a);
	// printf("s -> len %d\n", s->len);
	// if (s->top_a == 0)
	// {
	// 	printf("Error: s->len");
	// 	exit(1);
	// }
	// printf("tops: a: %d b: %d", s->top_a, s->top_b);
	// printf("before: \n");
	// print_stacks(s);
	// int			i = 0;
	// while (s->stack_a[i])
	// {
	// 	s->stack_a[i] = s->stack_a[i + 1];
	// 	i++;
	// }
	// int ln_a = s->top_a;
	int i = 0;
	// printf("---> len %d \n ", ln_a);
	// printf("---> len %d \n ", s->len);
	while (i < s->len)
	{
		s->stack_a[i] = s->stack_a[i + 1];
		// printf("\\\\-> stack a : %ld\n", s->stack_a[i]);
		i++;
	}
	s->top_a--;
	i = 0;

	// printf("pulled\n");
	// print_stacks(s);
	// printf("top b : %d\n", s->top_b);
	 i = s->n_b;
	while (i > 0)
	{
		s->stack_b[i] = s->stack_b[i - 1];
		// printf("\\\\-> stack a : %ld\n", s->stack_a[i]);
		i--;
	}
	// ft_memmove(s->stack_b + 1, s->stack_b, s->top_b + 1);
	s->top_b++;
	s->n_b++;
	// printf("---> nmbr b : %d",s->n_b);
	s->stack_b[0] = pop_a;

	// printf("INDEX ZERO IS %ld AND TOP IS %d\n", s->stack_b[0], s->top_b);
	
	// int ln_b = s->top_b;
	// ln_b--;
	// // int  i = 0;
	// while (ln_b--)
	// {
	// 	s->stack_b[ln_b] = s->stack_b[ln_b - 1];
	// 	printf("\\\\-> stack b : %ld\n", s->stack_b[ln_b]);
	// 	// i--;
	// }
	// s->stack_b[0] = pop_a;
	// //2 71 3 111 8 1
	// printf("top a : %d\n", s->top_a);
	// printf("top b : %d\n", s->top_b);
// printf("after\n");
// 		print_stacks(s);
	// printf("----> A top %d\n", s->top_a);
	// printf("----> A nmbr a%d\n", s->n_a);
	// printf("----> A len %d\n", s->len);
	write(1, "pb\n", 3);

	// printf("after: \n");
	// print_stacks(s);
}

void	pa(t_stack *s)
{
	long	pop_b;

	// printf("before: \n");

	// print_stacks(s);
	pop_b = s->stack_b[0];
	// printf("pop b : %ld\n", pop_b);
	if (pop_b == -1)
	{
		printf("Error VIP: stack underflow");
		exit(1);
	}
	if (s->top_b < 0)
	{
		printf("Error VIP: s->top b\n");
		exit(1);
	}

	int i = 0;
	// printf("---> len %d \n ", ln_a);
	// printf("--->before  len %d ..<----\n ", s->top_b);
	while (i < s->top_b)
	{
		s->stack_b[i] = s->stack_b[i + 1];
		// printf("\\\\-> stack a : %ld\n", s->stack_a[i]);
		i++;
	}
	s->top_b--;
	i = 0;
	// printf("--->after  len %d ..<----\n ", s->top_b);

	// printf("pulled\n");
	// print_stacks(s);
	// printf("top b : %d\n", s->top_b);
	 i = s->top_a;
	//  printf("---> %d", s->n_a);
	//  printf("---> %d", i);
	while (i > 0)
	{
		s->stack_a[i] = s->stack_a[i - 1];
		// printf("\\\\-> stack a : %ld\n", s->stack_a[i]);
		i--;
	}
	// ft_memmove(s->stack_b + 1, s->stack_b, s->top_b + 1);
	s->top_a++;
	// s->n_a++;
	s->stack_a[0] = pop_b;
	// int ln_b = s->top_b;
	// printf("---> ln_b %d\n", ln_b);

	// int i = 0;
	// while (i < ln_b)
	// {
	// 	s->stack_b[i] = s->stack_b[i + 1];
	// 	// printf("\\\\-> stack b : %ld...\n", s->stack_b[i]);
	// 	i++;
	// }
	// s->top_b--;
	// // printf("top b :%d, \n", s->top_b);
	// ft_memmove(s->stack_a + 1, s->stack_a, s->top_a + 1);
	// s->top_a++;
	// // printf("top a :%d, \n", s->top_a);

	// s->stack_a[0] = pop_b;
		// printf("\\\\-> stack a: %ld\n", s->stack_a[0]);
		// printf("\\\\-> stack b : %ld\n", s->stack_b[0]);

	
		// printf("after: \n");

	// print_stacks(s);
	// long	pop_b;
	// int			i = 0;

	// pop_b = stck->stack_b[0];
	// if (pop_b == -1)
	// {
	// 	printf("Error VIP: stack underflow");
	// 	exit(1);
	// }
	// while (stck->stack_b[i])
	// {
	// 	stck->stack_b[i] = stck->stack_b[i + 1];
	// 	i++;
	// }
	// stck->top_b++;
	// stck->top_a--;
	// stck->stack_a[stck->top_a] = pop_b;
	write(1, "pa\n", 3);
}