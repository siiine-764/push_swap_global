/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:49:13 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/15 12:33:14 by mayache-         ###   ########.fr       */
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
	int tp = p->top_a;
	printf("-----top inside print stack A :%d\n", tp);
	printf("-----top inside print stack B :%d\n", p->top_b);

	while (i <= tp)
	{
        printf("\x1b[38;2;207;75;14m\t | %d | | %ld |\n", i, p->stack_a[i]);
		i++;
		
	}
	printf("\t----- -----\n");
    printf("\t     a\n");
	tp = p->top_b;
    i = 0;
	printf("\n\n");
    while (i <= tp)
	{
        printf("\x1b[38;2;207;75;14m\t | %d | | %ld |\t\n",i, p->stack_b[i]);
		i++;
		
	}
    printf("\t----\n");
    printf("\t  b  \n");
}

void	ft_option(t_stack *s)
{
	int i = ft_sorted(s->stack_a, s->top_a);
	if (i != 1)
	{
		if (s->top_a == 2 || s->top_a == 1)
			ft_sort_three(s);
		else if (s->top_a == 3)
			ft_sort_four(s);
		else if (s->top_a == 4)
			ft_sort_five(s);
		else if (s->top_a > 4  && s->top_a < 100)
			ft_big_sort(s);
		else if (s->top_a >= 100  && s->top_a < 500)
			ft_extra_big_sort(s);
		// free_all(&s, nmbr, 0, 0);
	}
	else
		return ;

}
int main(int ac, char **av)
{
	char	**nmbr;
	t_stack	s;
	s.top_a = -1;
	s.top_b = -1;
	s.n_b = 0;
	s.n_a = 0;
	if (ac == 1)
		ft_message_error_empty();
	check_argv(ac, av);
	// ft_check_same_nbr(av);
	nmbr = put_nbr_array(av, ac, &s);
	ft_check_nbr(nmbr);
	s.stack_a = ft_calloc(1, sizeof(long) * (s.len + 1));
	s.stack_b = ft_calloc(1, sizeof(long) * (s.len + 1));
	fill_stack_a(nmbr, &s);
	ft_option(&s);
	return (0);
}
