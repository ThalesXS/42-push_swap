/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txisto-d <txisto-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:03:00 by txisto-d          #+#    #+#             */
/*   Updated: 2023/12/19 20:11:53 by txisto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

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

	while (temp_a->next)
	{
		ft_printf("%d\n",temp_a->content);
		temp_a = temp_a->next;

	}
	ft_printf("%d\n\n",temp_a->content);
	while (temp_b->next)
	{
		ft_printf("%d\n",temp_b->content);
		temp_b = temp_b->next;
	}
	ft_printf("%d\n\n",temp_b->content);
	temp_a = &node0;
	temp_b = &node4;

	ft_sa(&temp_a);

	while (temp_a->next)
	{
		ft_printf("%d\n",temp_a->content);
		temp_a = temp_a->next;

	}
	ft_printf("%d\n\n",temp_a->content);
	while (temp_b->next)
	{
		ft_printf("%d\n",temp_b->content);
		temp_b = temp_b->next;
	}
	ft_printf("%d\n",temp_b->content);
	return (0);
}