/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:49:10 by mayache-          #+#    #+#             */
/*   Updated: 2023/05/05 23:20:59 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct stack
{
	long	*stack_b;
	long	*stack_a;
	int		top_a;
	int		top_b;
	int		n_b;
	int		n_a;
	int		len;
}	t_stack;

void	ft_option(t_stack *s);
/// ft_check_input //
void	ft_tool(char *str);
void	ft_check_speace(char **av);
void	ft_check_double_nbr(t_stack *s, char **av);
void	check_argv(int argc, char **argv);
int		ft_sorted(long *arr, int size);
/// ft_sort //
void	pb(t_stack *s);
void	pa(t_stack *s);
void	sa(t_stack *s);
void	sb(t_stack *s);
void	ss(t_stack *s);
void	rra(t_stack *s);
void	rrb(t_stack *s);
void	ra(t_stack *s);
void	rb(t_stack *s);
void	rr(t_stack *s);
void	ft_rb(t_stack *s);
void	ft_ra(t_stack *s);
void	ft_rra(t_stack *s);
void	ft_rrb(t_stack *s);
void	ft_sb(t_stack *s);
void	ft_sa(t_stack *s);
// functions to sorting //
void	ft_sort_three(t_stack *s);
void	ft_sort_four(t_stack *s);
void	ft_sort_five(t_stack *s);
long	*ft_sort(t_stack *stck);
void	ft_big_sort(t_stack *s);
void	ft_extra_big_sort(t_stack *s);
void	ft_push_a(t_stack *s);
void	ft_mssg_error3(t_stack *s);
void	ft_mssg_error2(t_stack *s);
void	ft_mssg_error1(long pop);
// functoins to help sort //
long	ft_find_biger(t_stack *s);
long	ft_find_location(t_stack *s, long nbr);
long	ft_find_minor(t_stack *s);
long	ft_find_local(long *chaos, long nbr, int len);
/// ft_fill_stacks //
char	**put_nbr_array(char **av, int ac, t_stack *p);
void	fill_stack_a(char **a, t_stack *s);
void	ft_len(char *tmp_num, t_stack *p);
void	ft_free(char **numbers);
void	ft_check_len(int wrds, char const *s, char c, t_stack *stack);
int		cnt_words(const char *str, char delimiter);
int		sizew(char const *s, char c, int i);
void	ft_check_len(int wrds, char const *s, char c, t_stack *stack);
char	**ft_split(char const *s, char c, t_stack *stack);
/// ft_messages_errors //
void	message_error(void);
#endif
