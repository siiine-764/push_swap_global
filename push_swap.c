/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:49:13 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/17 01:49:30 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		else
			write(1, "error\n", 6);
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
	nmbr = put_nbr_array(av, ac, &s);
	s.stack_a = ft_calloc(1, sizeof(long) * (s.len + 1));
	s.stack_b = ft_calloc(1, sizeof(long) * (s.len + 1));
	fill_stack_a(nmbr, &s);
	ft_check_nbr(nmbr);
	ft_option(&s);
	ft_free(nmbr);
	return (0);
}
