/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:49:13 by mayache-          #+#    #+#             */
/*   Updated: 2023/03/31 01:21:04 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_sorted(long long *arr, int size)
{
	int i = 0;
	while (i < size - 1)
	{
		if (arr[i] > arr[i + 1])
			return 0;
		else
			i++;
	}
	return 1;
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

long long ft_find_local(long long *chaos, long long nbr)
{
	// (void)nbr;
	// (void)chaos;
	int i;

	i = 0;
	while (i < 500)
	{
		if (chaos[i] == nbr)
			return (i);
		i++;
	}
	return (-1);
}

long long	*ft_sort(t_stack *stck)
{
	int	i;
	long long	nbr;
	long long	*chaos;
	//chic neat

	chaos = malloc(sizeof(long long *) * (stck->top_a + 1));
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
		if (chaos[i] < chaos[i + 1])
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

void	ft_check_range(t_stack *s)
{
	int			range = 0;
	long long	sopa = 0; 
	long long	*chaos = ft_sort(s);

	while (s->top_a >= 0)
	{
		sopa = ft_find_local(chaos, s->stack_a[0]);
		// printf("%lld", sopa);
		if (sopa >= range && sopa <= 30 + range)
		{
			pb(s);
			range++;
		}
		else if (sopa < range)
		{
			pb(s);
			rb(s);
			range++;
		}
		else if (sopa > 30 + range) 
			ra(s);
	}
}

void	check_argv(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 1;
	while (i != argc)
	{
		str = argv[i];
		while (*str)
		{
			if (*str == '-' || *str == '+' )
			{
				str++;
				if (*str < '0' || *str > '9')
				{
					write(1, "error VIP\n", 10);
				exit(1);
					
				}
			}
			else if (*str != ' ' && (*str < '0' || *str > '9'))
			{
				write(1, "error VIP\n", 10);
				exit(1);
			}
			if (*str)
				str++;
		}
		i++;
	}
}

void	ft_check_nbr(char **av)
{
	int i;
	int j;

	i = 0;
	while (av[i])
	{
		j =  i + 1;
		while(av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
			{
				write(1, "Error VIP : Double number\n", 26);
				exit(1);
			}
			j++;
		}
		i++;
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

	check_argv(ac, av);
	// ft_check_same_nbr(av);
	nmbr = put_nbr_array(av, ac, &s);
	ft_check_nbr(nmbr);
	s.stack_a = malloc(sizeof(long long) * (s.size + 1));
	s.stack_b = malloc(sizeof(long long) * (s.size + 1));
	fill_stack_a(nmbr, &s);
	s.top_a--;
	// ft_check_range(&s);
	// print_stacks(&s);
	// ft_push_stack_a(&s);
	print_stacks(&s);

	ft_sort_three(&s);
	print_stacks(&s);
	// long long nbr[] = {1, 2, 5, 6, 55, 54};
	// printf("%lld", ft_find_local(nbr, 9));
	// int i = ft_sorted(s.stack_a, s.top_a);
	// if (i == 0)
	// {
	// 	printf("\neverything right\n");
	// }
	// else
	// 	printf("Keine Sorgen :] Sie haben irgendwas nicht gut\n");
	
	return (0);
}