/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txisto-d <txisto-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:37:27 by txisto-d          #+#    #+#             */
/*   Updated: 2023/12/18 17:32:22 by txisto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./ft_printf/libft/libft.h"

void	ft_sb(t_stack **stack_b, t_list *list)
{
	ft_swap(stack_b);
}

void	ft_pb(t_stack **stack_b, t_stack **stack_a, t_list *list)
{
	ft_push(stack_b, stack_a);
}

void	ft_rb(t_stack **stack_b, t_list *list)
{
	ft_rotate(stack_b);
}

void	ft_rrb(t_stack **stack_b, t_list *list)
{
	ft_reverse_rotate(stack_b);
}