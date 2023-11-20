/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txisto-d <txisto-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:54:55 by txisto-d          #+#    #+#             */
/*   Updated: 2023/11/20 17:07:28 by txisto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./ft_printf/libft/libft.h"

void	ft_swap(t_stack **stack)
{
	t_stack	*swap;

	swap = (*stack)->next;
	if (swap)
	{
		(*stack)->next = swap->next;
		swap->next = (*stack);
		swap->prev = NULL;
		(*stack)->prev = swap;
		(*stack) = swap;
	}
}

void	ft_push(t_stack **stack_dst, t_stack **stack_source)
{
	t_stack	*new_top_dst;
	t_stack	*new_top_source;

	new_top_source = (*stack_source)->next;
	new_top_dst = (*stack_source);
	new_top_source->prev = NULL;
	if ((*stack_dst))
	{
		new_top_dst->next = (*stack_dst);
		(*stack_dst)->prev = new_top_dst;
	}
	else
		new_top_dst->next = NULL;
	(*stack_source) = new_top_source;
	(*stack_dst) = new_top_dst;
}

void	ft_rotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*new_bottom;
	
	new_bottom = (*stack);
	(*stack) = (*stack)->next;
	(*stack)->prev = NULL;
	temp = (*stack);
	while (temp->next)
		temp = temp->next;
	temp->next = new_bottom;
	new_bottom->prev = temp;
	new_bottom->next = NULL;
}

void	ft_reverse_rotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*new_top;

	temp = (*stack);
	while (temp->next)
		temp = temp->next;
	new_top = temp;
	(temp->prev)->next = NULL;
	(*stack)->prev = new_top;
	new_top->prev = NULL;
	new_top->next = (*stack);
	(*stack) = new_top;
}