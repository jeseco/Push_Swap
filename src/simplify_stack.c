/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simplify_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:52:06 by jcourtem          #+#    #+#             */
/*   Updated: 2022/09/01 11:25:21 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

#include "../include/push_swap.h"
#include "../include/libft.h"
#include "../include/mini_sort.h"

void	cp_stack(t_stack *stack, int *dest, int *src)
{
	int	i;

	i = 0;
	while (i < stack->size)
	{
		dest[i] = src[i];
		i++;
	}
	ft_bzero(src, stack->size);
}

int	get_elem_index(int elem, t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size)
	{
		if (stack->a[i] == elem)
			return (i);
		i++;
	}
	return (-1);
}

void	simplify_stack_with_maxint(t_stack *stack, int index)
{
	int	j;
	int	small;

	j = 1;
	stack->count[index] = stack->size;
	while (j < stack->size)
	{
		index = 0;
		small = smallest(stack, stack->a, stack->a[index]);
		index = get_elem_index(small, stack);
		stack->count[index] = j;
		stack->a[index] = INT_MAX;
		j++;
	}
	cp_stack(stack, stack->a, stack->count);
}

void	simplify_stack(t_stack *stack)
{
	int		i;
	int		j;
	int		small;

	j = 1;
	i = get_elem_index(INT_MAX, stack);
	if (i != -1)
		return (simplify_stack_with_maxint(stack, i));
	while (j <= stack->size)
	{
		i = 0;
		small = smallest(stack, stack->a, stack->a[i]);
		i = get_elem_index(small, stack);
		stack->count[i] = j;
		stack->a[i] = INT_MAX;
		j++;
	}
	cp_stack(stack, stack->a, stack->count);
}
