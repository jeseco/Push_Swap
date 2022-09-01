/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:18:21 by jcourtem          #+#    #+#             */
/*   Updated: 2022/09/01 11:26:56 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../include/libft.h"

int	cleanup(t_stack *stack)
{
	free(stack->a);
	free(stack->b);
	free(stack->count);
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	stack;

	if (argc < 2)
		return (0);
	if (has_errors(argc, argv))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	else
		stack = stack_init(argc, argv);
	simplify_stack(&stack);
	if (a_is_sorted(&stack))
		return (cleanup(&stack));
	if (stack.size <= 5)
		mini_sort(&stack);
	else if (stack.size > 5)
		sort(&stack);
	return (cleanup(&stack));
}
