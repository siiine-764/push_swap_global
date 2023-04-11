/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stck.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:59:46 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/11 23:29:30 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	fill_stack_a(char **a, t_stack *s)
{
	s->top_a = -1;
		printf("top --- %d\n", s->top_a);
		printf("top --- %d size\n", s->size);
		printf("top --- %d size fffff\n", s->len);
// int len = s->size;
	while (++s->top_a <= s->len)
	{
		s->stack_a[s->top_a] = ft_atoi(a[s->top_a]);
		if ((s->stack_a[s->top_a]) < MIN_INT || s->stack_a[s->top_a] > MAX_INT)
			ft_message_error_integer();
		printf("top %d\n", s->top_a);
		printf(" stack %ld\n", s->stack_a[s->top_a]);
		// s->top_a++;
	}
	
	s->top_a--;
		// printf("-------\n stack 4 %ld\n", s->stack_a[4]);

		printf("top a ---- %d\n", s->top_a);
}

char	**put_nbr_array(char **av, int ac, t_stack *p)
{
	char	*tmp_num;
	char	**numbers;
	int i;

	i = 1;
	int j = 0;
	printf("ac == %d\n", ac);

	tmp_num = ft_calloc(1, sizeof(char *) * (ac - 1));
	p->size = 0;
	p->len = 0;
	
	while (av[i] != '\0')
	{
		// printf("filling: %s\n", av[i]);
		tmp_num = ft_strjoin(tmp_num, av[i]);
		tmp_num = ft_strjoin(tmp_num, " ");
		printf("%s.\n", tmp_num);
		i++;
		p->size++;
	}
	// numbers = ft_split((const char *)tmp_num, ' ');
	while (tmp_num[j] != '\0')
	{
		// printf("--- tmp num : %c\n", tmp_num[j]);
		if (tmp_num[j] == ' ')
		{
			p->len++;
		}
		if (tmp_num[j] == ' ' && tmp_num[j + 1] == '\0')
			p->len--;
		j++;
	}
	char *tmp_num_cpy;

	tmp_num_cpy = ft_calloc(1, sizeof(char *) * (p->len - 1));
	int ln = 0;
	while (tmp_num[ln] != '\0')
	{
		tmp_num_cpy[ln] = tmp_num[ln];
		printf("--- tmp_num_cpy %c\n", tmp_num_cpy[ln]);
		ln++;
	}
	numbers = ft_split((const char *)tmp_num_cpy, ' ');
	// p->size--;
	// p->len--;
	printf("%s.\n", tmp_num);
	printf("top --- %d size inside put array\n", p->size);
	printf("top --- %d len inside put array\n", p->len);
	// free(tmp_num);
	return (numbers);
}