/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txisto-d <txisto-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:03:00 by txisto-d          #+#    #+#             */
/*   Updated: 2023/12/19 21:54:31 by txisto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

int	main(int argc, char **argv)
{
	int	i;
	t_stack *stack_a;

	i = 1;
	stack_a = NULL;
	if (ft_stackcheck(argc, argv) && argc > 2)
	{
		while (i < argc)
		{
			if (!stack_a)
				stack_a = ft_newstack(argv[i], &stack_a);
			else
				ft_newstack(argv[i], &stack_a);
			i++;
		}
		//ft_sort(&stack_a);
		ft_cleanstack(&stack_a);
	}
	else if (!ft_stackcheck(argc, argv))
		ft_putstr_fd("Error\n", 2);
	return (0);
}
/*
void	ft_sort(t_stack **stack_a)
{

}
*/