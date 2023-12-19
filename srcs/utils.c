/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txisto-d <txisto-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:19:40 by txisto-d          #+#    #+#             */
/*   Updated: 2023/12/19 22:08:56 by txisto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

int ft_stackcheck(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!ft_argcheck(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_argcheck(char *arg)
{
	while (*arg)
	{
		if ((*arg < '0' || *arg > '9'))
			return (0);
		arg++;
	}
	return (1);
}

t_stack	*ft_newstack(char *value, t_stack **value_n1)
{
	t_stack	*newstack;
	t_stack	*temp;
	
	temp = *value_n1;
	if (ft_atol(value) > INT_MAX || ft_atol(value) < INT_MIN)
	{
		ft_cleanstack(value_n1);
		exit(1);
	}
	newstack = (t_stack *) ft_calloc(1, sizeof(t_stack));
	if (!newstack)
	{
		ft_cleanstack(value_n1);
		exit(1);
	}
	newstack->content = ft_atol(value);
	if (temp)
	{
		while ((temp)->next)
			(temp) = (temp)->next;
		(temp)->next = newstack;
	}
	newstack->prev = temp;
	newstack->next = NULL;
	return (newstack);
}

void	ft_cleanstack(t_stack **stack)
{
	t_stack	*nextnode;

	if (stack)
	{
		while (*stack)
		{
			nextnode = (*stack)->next;
			free(*stack);
			*stack = nextnode;
		}
	}
}

int	ft_sorted(t_stack **stack)
{
	t_stack *temp;

	temp = *stack;
	while (temp->next)
	{
		if (temp->content > temp->next->content)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int	ft_repeated(t_stack **stack)
{
	
}