/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:49:10 by mayache-          #+#    #+#             */
/*   Updated: 2023/03/14 12:53:25 by mayache-         ###   ########.fr       */
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
	long long	*stack_b;
	long long	*stack_a;
	int			top_a;
	int			top_b;
	int			top;
	int			size;
}	t_stack;

/// ft_check_input //
char	**put_nbr_array(char **av, int ac, t_stack *p);
void	ft_check_input(char **av);
void	check_argv(int argc, char **argv);
/// ft_sort //
long long	ft_pop_b(t_stack *stck);
long long	ft_pop_a(t_stack *stck);
void		ft_sproximo_a(t_stack *stck, long long elemento);
void		ft_sproximo_b(t_stack *stck, long long elemento);
void		ft_pb(t_stack *t_stck);
void		ft_pa(t_stack *t_stck);
void		ft_sa(t_stack *stck);
void		ft_sb(t_stack *stck);
void		ft_ss(t_stack *stck);
void		ft_rra(t_stack *stck);
void		ft_rrb(t_stack *stck);
void		ft_ra(t_stack *stck);
void		ft_rb(t_stack *stck);
void		ft_rr(t_stack *stck);
// functions to sorting //
void		ft_check_range(t_stack *stck);
/// ft_fill_stacks //
void	fill_stack_a(char **a, t_stack *s);
/// ft_messages_errors //
void	ft_message_error_space(void);
void	ft_message_error(void);
void	ft_message_error_integer(void);
void	ft_message_error_nbr(void);
void	ft_message_error_empty(void);
#endif