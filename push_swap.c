/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:49:13 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/10 01:18:11 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_number(char **nbr, int i)
{
	while (nbr[i])
	{
		free(nbr[i]);
		i++;
	}
}

void	free_all(t_stack *s, char **nbr, int i, int sign)
{
	free(s->stack_a);
	free(s->stack_b);
	// free(s->top_a);
	// free(s->top_b);
	free(s);
	if (sign)
		free_number(nbr, i);
	//free(nbr);
}

void    print_stacks(t_stack *p)
{
    int    i;

    printf("\n");
    i = 0;
	int tp = p->top_a + 1;
	while (tp--)
        printf("\x1b[38;2;207;75;14m\t| %lld |\n", p->stack_a[tp]);
	printf("\t-----\n");
    printf("\t  a\n");
	tp = p->top_b + 1;
	printf("\n\n");
    while (tp--)
        printf("\x1b[38;2;207;75;14m\t| %lld |\t\n", p->stack_b[tp]);
    printf("\t----\n");
    printf("\t  b  \n");
}

long long ft_pop(t_stack *s)
{
	long long el;
	// printf("--->pop : %lld\n", s->stack_b[s->top_b]);
	el= s->stack_b[s->top_b];
	// printf("--->pop : %lld\n", el);
	s->top_b--;
	return el;
}

long long ft_pop_a(t_stack *s)
{
	long long el;
	// printf("--->pop : %lld\n", s->stack_b[s->top_b]);
	el= s->stack_a[s->top_a];
	// printf("--->pop : %lld\n", el);
	s->top_a--;
	return el;
}
void push(t_stack *s, long long el)
{
	s->top_a++;
	s->stack_a[s->top_a] = el;
}

// void pa(t_stack *s)
// {
// 	long long store;

// 	store = ft_pop(s);
// 	push(s, store);
// 	printf("pa\n");
// }

void push_b(t_stack *s, long long el)
{
	// if (s->top_a == - 1)
	// {
	// 	printf("Error VIP: s overflow");
	// 	exit(1);
	// }
	s->top_b++;
	s->stack_b[s->top_b] = el;
}
// void pb(t_stack *s)
// {
// 	long long store;

// 	store = ft_pop_a(s);
// 	// printf("--> %lld", store);
// 	push_b(s, store);
// 	printf("pb\n");
// }

int main(int ac, char **av)
{
	char	**nmbr;
	t_stack	s;
	s.top_a = -1;
	s.top_b = -1;
	if (ac == 1)
		ft_message_error_empty();

	check_argv(ac, av);
	// ft_check_same_nbr(av);
	nmbr = put_nbr_array(av, ac, &s); 
	ft_check_nbr(nmbr);
	s.stack_a = malloc(sizeof(long long) * (s.size + 1));
	s.stack_b = malloc(sizeof(long long) * (s.size + 1));
	fill_stack_a(nmbr, &s);
	s.top_a--;
	int i = ft_sorted(s.stack_a, s.top_a);
	if (i == 1)
		printf("it\'s sorted\n");
	else
	{
		// if (s.len == 3 || s.len == 2)
		// 	ft_sort_three(&s);
		// else if (s.len == 4)
		// ft_sort_four(&s);
		// else if (s.len == 5)
			// ft_sort_five(&s);
		// else 
		// if (s.len > 5  && s.len <= 100)
		// printf("%ld", resize_b(&s));
		ft_big_sort(&s);
		// else if (s.len > 100  && s.len <= 500)
		// 	ft_extra_big_sort(&s);
		// print_stacks(&s);
		// free_all(&s, nmbr, 0, 0);

		// pb(&s);
		// pb(&s);
		// pb(&s);
		// pb(&s);
		// pb(&s);
		// pb(&s);
		// pb(&s);
		// printf("--->pop inside main : %lld\n", s.stack_a[s.top_a]);
		// printf("--->pop inside main b : %lld\n", s.stack_b[s.top_b]);
		// pa(&s);
		// pa(&s);
		// pa(&s);
		// pa(&s);
		
		// printf("--->pop inside main a : %lld\n", s.stack_a[s.top_a]);
		// printf("--->pop inside main b : %lld\n", s.stack_b[s.top_b]);
		// print_stacks(&s);
	
	}
	return (0);
}
