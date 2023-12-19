/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txisto-d <txisto-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:19:40 by txisto-d          #+#    #+#             */
/*   Updated: 2023/12/19 20:55:39 by txisto-d         ###   ########.fr       */
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

t_stack	*ft_newstack(char *value, t_stack *value_n1)
{
	t_stack	*newstack;

	newstack = (t_stack *) ft_calloc(1, sizeof(t_stack));
	if (!newstack)
		exit(1);
	newstack->content = ft_atoi(value);
	if (value_n1)
	{
		while (value_n1->next)
			value_n1 = value_n1->next;
		value_n1->next = newstack;
	}
	newstack->prev = value_n1;
	newstack->next = NULL;
}