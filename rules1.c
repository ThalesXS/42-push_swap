/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txisto-d <txisto-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:11:10 by txisto-d          #+#    #+#             */
/*   Updated: 2023/11/20 17:57:10 by txisto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./ft_printf/libft/libft.h"

void	ft_sa(t_stack **stack_a, t_list **lista)
{
	ft_swap(stack_a);
	if (*lista)
	{
		lista->next = ft_lstnew("sa");
		lista = lista->next;
	}
	else
		lista = ft_lstnew("sa");
	return (lista);
}

void	ft_pa(t_stack **stack_a, t_stack **stack_b, t_list *lista)
{
	ft_push(stack_a, stack_b);
}

void	ft_ra(t_stack **stack_a, t_list *lista)
{
	ft_rotate(stack_a);
}

void	ft_rra(t_stack **stack_a, t_list *lista)
{
	ft_reverse_rotate(stack_a);
}

#include <stdio.h>

int	main(void)
{
	t_stack	node0;
	t_stack	node1;
	t_stack	node2;
	t_stack	node3;
	t_stack *temp_a;
	t_stack	node4;
	t_stack	node5;
	t_stack	node6;
	t_stack	node7;
	t_stack *temp_b;
	t_list	lista;

	node0 = (t_stack){.prev = NULL, .next = &node1,.content = 1};
	node1 = (t_stack){.prev = &node0, .next = &node2, .content = 3};
	node2 = (t_stack){.prev = &node1, .next = &node3, .content = 6};
	node3 = (t_stack){.prev = &node2, .next = NULL, .content = 9};
	node4 = (t_stack){.prev = NULL, .next = &node5,.content = -3};
	node5 = (t_stack){.prev = &node4, .next = &node6, .content = -6};
	node6 = (t_stack){.prev = &node5, .next = &node7, .content = -12};
	node7 = (t_stack){.prev = &node6, .next = NULL, .content = -8};
	temp_a = &node0;
	temp_b = &node4;
	lista = NULL;
	while (temp_a->next)
	{
		printf("%d\n",temp_a->content);
		temp_a = temp_a->next;

	}
	printf("%d\n\n",temp_a->content);
	while (temp_b->next)
	{
		printf("%d\n",temp_b->content);
		temp_b = temp_b->next;
	}
	printf("%d\n\n",temp_b->content);
	temp_a = &node0;
	temp_b = &node4;


	ft_ss(&temp_a, &temp_b);


	while (temp_a->next)
	{
		printf("%d\n",temp_a->content);
		temp_a = temp_a->next;

	}
	printf("%d\n\n",temp_a->content);
	while (temp_b->next)
	{
		printf("%d\n",temp_b->content);
		temp_b = temp_b->next;
	}
	printf("%d\n",temp_b->content);
	return (0);
}