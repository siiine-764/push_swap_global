/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:49:13 by mayache-          #+#    #+#             */
/*   Updated: 2023/03/17 16:48:26 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    print_stacks(t_stack *p)
{
    int    i;

    printf("\n");
    i = 0;
	while (i <= p->top_a)
    {
        printf("\x1b[38;2;207;75;14m\t| %lld |\n", p->stack_a[i]);
        i++;
    }
	printf("\t-----\n");
    printf("\t  a\n");
	i = 0;
	printf("\n\n");
    while (i <= p->top_b)
    {
        printf("\x1b[38;2;207;75;14m\t| %lld |\t\n", p->stack_b[i]);
        i++;
    }
    printf("\t----\n");
    printf("\t  b  \n");
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

long long find_pos_extra(long long *chaos, long long nbr)
{
	int i;

	i = 0;
	while (i < 500)
	{
		if (chaos[i] == nbr){
			printf("--> find :%d\n", i);
			printf("--> find chaos :%lld\n", chaos[i]);
			return (i);
		}
		i++;
	}
	return (-1);
}

long long	*ft_sort(t_stack *stck)
{
	int	i;
	long long	nbr;
	long long	*chaos;

	chaos = malloc(sizeof(long long *) * stck->top_a);
	if (!chaos)
		printf("Error VIP : cette array n\'est pas remplir\n");
	i = 0;
	while (i < stck->top_a)
	{
		chaos[i] = stck->stack_a[i];
		i++;
	}
	i = 0;
	while (i < stck->top_a - 1)
	{
		if (chaos[i] > chaos[i + 1])
		{	
			nbr = chaos[i];
			chaos[i] = chaos[i + 1];
			chaos[i + 1] = nbr;
			i = 0;
		}
		else
			i++;
		// printf("--> choas :%lld\n", chaos[i + 1]);
	}
	return (chaos);
}

void	ft_check_range(t_stack *s)
{
	int	range = 0;
	long long	*chaos = ft_sort(s);
	long long sopa = 0; 
	int y = 0;
	while (chaos[y])
	{
		printf("chaos[%d] = %lld\n", y, chaos[y]);
		y++;
	}
	while (s->top_a >= 0)
	{
		sopa = find_pos_extra(chaos, s->stack_a[0]);
		if (sopa >= range && sopa <= 30 + range)
		{
			ft_pb(s);
			range++;
		}
		else if (sopa < range)
		{
			ft_pb(s);
			ft_rb(s);
			range++;
		}
		else if (sopa > 30 + range)
		{
			ft_ra(s);
		}
		printf("\ntop_a = %lld\n", s->stack_a[0]);
		usleep(100000);
	}
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
	// int	lg;
	ft_check_range(&s);
	print_stacks(&s);
	printf("everything right\n");
	return (0);
}