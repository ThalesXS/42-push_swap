/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txisto-d <txisto-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:13:51 by txisto-d          #+#    #+#             */
/*   Updated: 2023/12/18 17:34:02 by txisto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./ft_printf/libft/libft.h"

void	ft_ss(t_stack **stack_a, t_stack **stack_b, t_list *list)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b, t_list *list)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b, t_list *list)
{
	ft_reverse_rotate(stack_a);
	ft_reverse_rotate(stack_b);
}