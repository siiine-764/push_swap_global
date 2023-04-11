/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:49:10 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/10 21:53:22 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

#define MAX_INT 2147483647
#define MIN_INT -2147483648

#include "./libft/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct stack
{
	long	*stack_b;
	long	*stack_a;
	long	*s_fake;
	int			sz_fake;
	// long long	*chaos;
	int			top_a;
	int			top_b;
	int			size;
	int			len;
}	t_stack;

/// ft_check_input //
void	ft_check_input(char **av);
void	ft_check_nbr(char **av);
void	check_argv(int argc, char **argv);
int		ft_sorted(long *arr, int size);
/// ft_sort //
void		pb(t_stack *t_stck);
void		pa(t_stack *t_stck);
void		sa(t_stack *stck);
void		sb(t_stack *stck);
void		ss(t_stack *stck);
void		rra(t_stack *stck);
void		rrb(t_stack *stck);
void		ra(t_stack *stck);
void		rb(t_stack *stck);
void		rr(t_stack *stck);
void		ft_rb(t_stack *stck);
void		ft_ra(t_stack *stck);
void		ft_rra(t_stack *stck);
void		ft_rrb(t_stack *stck);
void		ft_sb(t_stack *s);
void		ft_sa(t_stack *s);
// functions to sorting //
void		ft_sort_three(t_stack *s);
void		ft_sort_four(t_stack *s);
void		ft_sort_five(t_stack *s);
long		*ft_sort(t_stack *stck);
void		ft_big_sort(t_stack *s);
void		ft_extra_big_sort(t_stack *s);
void		ft_push_a(t_stack *s);
// functoins to help sort //
long	ft_find_biger(t_stack *stck);
long	ft_find_location(t_stack *stck, long nbr);
long	ft_find_minor(t_stack *s);
long	ft_find_local(long *chaos, long nbr);
/// ft_fill_stacks //
char	**put_nbr_array(char **av, int ac, t_stack *p);
void	fill_stack_a(char **a, t_stack *s);
/// ft_messages_errors //
void	ft_message_error_space(void);
void	ft_message_error(void);
void	ft_message_error_integer(void);
void	ft_message_error_nbr(void);
void	ft_message_error_empty(void);
void    print_stacks(t_stack *p);
#endif