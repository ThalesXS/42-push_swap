/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txisto-d <txisto-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:05:39 by txisto-d          #+#    #+#             */
/*   Updated: 2023/12/18 17:34:52 by txisto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "./ft_printf/libft/libft.h"
typedef struct	s_stack
{
	int				content;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

void	ft_swap(t_stack **stack);
void	ft_push(t_stack **stack_dst, t_stack **stack_source);
void	ft_rotate(t_stack **stack);
void	ft_reverse_rotate(t_stack **stack);
void	ft_sa(t_stack **stack_a, t_list *list);
void	ft_pa(t_stack **stack_a, t_stack **stack_b, t_list *list);
void	ft_ra(t_stack **stack_a, t_list *list);
void	ft_rra(t_stack **stack_a, t_list *list);
void	ft_sb(t_stack **stack_b, t_list *list);
void	ft_pb(t_stack **stack_b, t_stack **stack_a, t_list *list);
void	ft_rb(t_stack **stack_b, t_list *list);
void	ft_rrb(t_stack **stack_b, t_list *list);
void	ft_ss(t_stack **stack_a, t_stack **stack_b, t_list *list);
void	ft_rr(t_stack **stack_a, t_stack **stack_b, t_list *list);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b, t_list *list);
#endif