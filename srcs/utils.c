/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txisto-d <txisto-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:19:40 by txisto-d          #+#    #+#             */
/*   Updated: 2023/12/20 21:47:00 by txisto-d         ###   ########.fr       */
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
		if ((*arg < '0' || *arg > '9') && *arg != '-')
			return (0);
		arg++;
	}
	return (1);
}

t_stack	*ft_newstack(char *value, t_stack **value_n1)
{
	t_stack		*newstack;
	t_stack		*temp;
	static	int	index;

	if (!value_n1)
		index = 0;
	temp = *value_n1;
	if (ft_atol(value) > INT_MAX || ft_atol(value) < INT_MIN)
		ft_error(value_n1);
	newstack = (t_stack *) ft_calloc(1, sizeof(t_stack));
	if (!newstack)
		ft_error(value_n1);
	newstack->content = ft_atol(value);
	newstack->actual = index++;
	newstack->dest = 0;
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

int	ft_cleanstack(t_stack **stack)
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
	return (1);
}

void	ft_sorted(t_stack **stack)
{
	t_stack *temp;

	temp = *stack;
	while (temp->next)
	{
		if (temp->content > temp->next->content)
			return ;
		temp = temp->next;
	}
	exit(0);
}

void	ft_repeated(t_stack **stack)
{
	t_stack	*i;
	t_stack	*j;

	i = (*stack);
	while (i->next)
	{
		j = i->next;
		while (j)
		{
			if (i->content == j->content)
				ft_error(stack);
			j = j->next;
		}
		i = i->next;
	}
}

void	ft_error(t_stack **stack)
{
	ft_putstr_fd("Error\n", 2);
	exit(ft_cleanstack(stack));
}

int	ft_stacksize(t_stack **stack)
{
	int	i;
	t_stack	*aux;

	aux = *stack;
	i = 0;
	while (aux)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}

void	ft_dest(t_stack **stack)
{
	t_stack	*aux;
	t_stack *actual;

	actual = *stack;
	while (actual)
	{
		aux = *stack;
		while (aux)
		{
			if (actual->content > aux->content)
				actual->dest++;
			aux = aux->next;
		}
		actual = actual->next;
	}
}

void	ft_twostack(t_stack **stack_a)
{
	ft_ra(stack_a);
}

void	ft_threestack(t_stack **stack_a)
{
	int		index;
	t_stack	*aux;

	aux = *stack_a;
	index = 0;
	while (aux)
	{
		index = aux->dest + index * 10;
		aux = aux->next;
	}
	if (index == 102)
		ft_sa(stack_a);
	else if (index == 201)
		ft_ra(stack_a);
	else if (index == 120)
		ft_rra(stack_a);
	else
		ft_sa(stack_a);
	if (index == 21)
		ft_ra(stack_a);
	else if (index == 210)
		ft_rra(stack_a);
}

void	ft_biggerstack(t_stack **stack_a, t_stack **stack_b)
{
	ft_pb(stack_b, stack_a);
	ft_pb(stack_b, stack_a);
	ft_sort_b(stack_a, stack_b);
}

void	ft_sort_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *aux;
	aux = *stack_b;
	ft_printf("\nB\n");
	while (aux)
	{
		ft_printf("%d\n", aux->content);
		aux = aux->next;
	}
	aux = *stack_a;
	ft_printf("\nA\n");
	while (aux)
	{
		ft_printf("%d\n", aux->content);
		aux = aux->next;
	}
}

/*
int	ft_cost(t_stack **stack_a, t_stack **stack_b)
{
	
}*/