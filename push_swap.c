/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:49:13 by mayache-          #+#    #+#             */
/*   Updated: 2023/03/13 21:49:51 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    print_stacks(t_stack *p)
{
    int    i;

    printf("\n");
    i = 0;
    while (i <= p->top_a || i <= p->top_b)
    {
        if (i <= p->top_a && i <= p->top_b)
            printf("\x1b[31m| %lld |    | %lld |\n", p->stack_a[i], p->stack_b[i]);
        else if (i <= p->top_a && i > p->top_b)
            printf("\x1b[31m| %lld |    |    |\n", p->stack_a[i]);
        else if (i > p->top_a && i <= p->top_b)
            printf("\x1b[31m          | %lld |\n", p->stack_b[i]);
        i++;
    }
    printf("-----      ----\n");
    printf("  a          b  \n");
    printf("\n");
}


void	fill_stack_a(char **a, t_stack *s)
{
	s->top_a = 0;
	while (a[s->top_a])
	{
		s->stack_a[s->top_a] = ft_atoi(a[s->top_a]);
		if ((s->stack_a[s->top_a]) <= MIN_INT || s->stack_a[s->top_a] >= MAX_INT)
			ft_message_error_integer();
		s->top_a++;
	}
}

char	**put_nbr_array(char **av, int ac, t_stack *p)
{
	char *tmp_num;
	char **numbers;
	int i;

	i =1;
	tmp_num = malloc(sizeof(char *) * (ac - 1));
	p->size = 0;
	while (av[i])
	{
		tmp_num = ft_strjoin((const char *)tmp_num, (const char *)av[i]);
		tmp_num = ft_strjoin((const char *)tmp_num, " ");
		i++;
		p->size++;
	}
	numbers = ft_split((const char *)tmp_num, ' ');
	// free(tmp_num);
	return (numbers);
}

int main(int ac, char **av)
{
	char	**nmbr;
	t_stack	s;
	s.top_a = -1;
	s.top_b = -1;
	if (ac == 1)
		ft_message_error_empty();

	// check_argv(ac, av);
	// ft_check_same_nbr(av);
	nmbr = put_nbr_array(av, ac, &s);
	s.stack_a = malloc(sizeof(long long) * (s.size + 1));
	s.stack_b = malloc(sizeof(long long) * (s.size + 1));
	fill_stack_a(nmbr, &s);

	s.top_a--;
	print_stacks(&s);
	ft_pb(&s);
	ft_pb(&s);
	ft_pb(&s);
	ft_pb(&s);
	ft_pb(&s);
	ft_pb(&s);
	ft_pb(&s);
	print_stacks(&s);
	ft_ra(&s);
	ft_ra(&s);
	print_stacks(&s);
	ft_rra(&s);
	ft_rra(&s);
	print_stacks(&s);
	ft_rrb(&s);
	ft_rrb(&s);
	print_stacks(&s);
	ft_rb(&s);
	ft_rb(&s);
	ft_rb(&s);
	ft_rb(&s);
	print_stacks(&s);
	ft_pa(&s);
	print_stacks(&s);

	printf("\neverything right\n");
	return (0);
}
