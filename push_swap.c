/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:49:13 by mayache-          #+#    #+#             */
/*   Updated: 2023/03/16 22:37:58 by mayache-         ###   ########.fr       */
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

void	ft_check_range(t_stack *stck)
{
	int	lg;
	int	range = 15;
	lg = 0;
	// printf("%d", stck->top_a);
	while (lg <= stck->top_a)
	{
		// if (stck->stack_a[lg] > 0 || stck->stack_a[lg] < range)
		// {
		// 	printf("%lld", stck->stack_a[lg]);
		// 	ft_pb(stck);
		// }
		if (stck->stack_a[lg] > range)
		{
			// printf("%lld", stck->stack_a[lg]);
			ft_ra(stck);
		}
		printf("---%d\n", lg);
		lg++;
		// range++;
	}
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
	i = stck->top_a;
	while (i--)
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
	}
	return (chaos);
}

long long find_pos_extra(long long *chaos, long long nbr)
{
	int i;

	i = 0;
	while (i < 500)
	{
		if (chaos[i] == nbr){
			// printf("--> find :%d\n", i);
			// printf("--> find chaos :%lld\n", chaos[i]);
			return (i);
		}
		i++;
	}
	return (-1);
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
	// ft_check_range(&s);
	int	lg;
	int	range = 0;
	long long	*chaos = ft_sort(&s);
	long long sop = 0;
	// printf("-> fill chaos : %lld <-\n", *chaos);
	lg = s.top_a + 1;
	while (lg--)
	{
		sop = find_pos_extra(chaos, s.stack_a[0]);
		if (sop >= (0 + range) && sop <= (15 + range))
		{
			ft_pb(&s);
			// printf("A - %lld\n", sop);
			range++;
		}
		else if (sop > (15 + range))
		{
			ft_ra(&s);
			// printf("B - %lld\n", sop);
		}
		else if (sop < (0 + range))
		{
			ft_pb(&s);
			ft_rb(&s);
			// printf("C - %lld\n", sop);
			range++;
		}
	}
	print_stacks(&s);
	printf("everything right\n");
	return (0);
}