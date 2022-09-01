/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:56:15 by jcourtem          #+#    #+#             */
/*   Updated: 2022/08/27 17:30:11 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

#include "../include/push_swap.h"
#include "../include/libft.h"
#include "../include/stack.h"

int	double_arr_len(char **arr)
{
	int	i;

	i = 0;
	if (arr[i])
		while (arr[i])
			i++;
	return (i);
}

int	arr_len(int *arr)
{
	int	i;

	i = 0;
	if (arr != NULL)
		while (arr[i])
			i++;
	return (i);
}

bool	a_is_sorted(t_stack *stack)
{
	int	i;
	int	j;

	i = stack->pt_a;
	j = i - 1;
	while (j >= 0)
	{
		if (stack->a[i] != (stack->a[j] - 1))
			return (false);
		i--;
		j--;
	}
	return (true);
}

void	free_stack(t_stack *stack)
{
	int	*a;
	int	*b;
	int	*c;

	a = stack->a;
	b = stack->b;
	c = stack->count;
	free (a);
	free (b);
	free (c);
}

void	output_stack(t_stack *stack)
{
	int	stack_top;

	stack_top = stack->size - 1;
	printf("a|b\n");
	while (stack_top >= 0)
	{
		printf("%d|%d\n", stack->a[stack_top], stack->b[stack_top]);
		stack_top--;
	}
}
