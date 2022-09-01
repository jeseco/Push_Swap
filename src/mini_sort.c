/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 10:41:59 by jcourtem          #+#    #+#             */
/*   Updated: 2022/07/26 15:58:03 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

#include "../include/mini_sort.h"

int	biggest(t_stack *stack, int *arr, int biggest)
{
	int	i;

	i = 0;
	while (i <= stack->pt_a)
	{
		if (arr[i] > biggest)
			biggest = arr[i];
		i++;
	}
	return (biggest);
}

int	smallest(t_stack *stack, int *arr, int smallest)
{	
	int	i;

	i = 0;
	while (i <= stack->pt_a)
	{
		if (arr[i] < smallest)
			smallest = arr[i];
		i++;
	}
	return (smallest);
}

int	fetch(int elem, t_stack *stack)
{	
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (stack->a[i] != elem)
		i++;
	if (i < stack->size / 2)
		while (stack->a[stack->pt_a] != elem)
			count += reverse_rotate_a(stack);
	else
		while (stack->a[stack->pt_a] != elem)
			count += rotate_a(stack);
	count += push_b(stack);
	return (count);
}

int	sort_tri_stack(t_stack *stack)
{
	int	s;
	int	b;

	s = smallest(stack, stack->a, INT_MAX);
	b = biggest(stack, stack->a, stack->pt_a);
	if (!a_is_sorted(stack))
	{
		if ((stack->a[stack->pt_a] == s) && (stack->a[stack->pt_a - 1] == b))
			return (reverse_rotate_a(stack) + swap_a(stack));
		else if (stack->a[stack->pt_a] == b)
		{
			if (stack->a[stack->pt_a - 1] == s)
				return (rotate_a(stack));
			else
				return (rotate_a(stack) + swap_a(stack));
		}
		else
		{
			if (stack->a[stack->pt_a - 1] == s)
				return (swap_a(stack));
			else if (stack->a[stack->pt_a - 1] == b)
				return (reverse_rotate_a(stack));
		}
	}
	return (0);
}

int	mini_sort(t_stack *stack)
{
	if (stack->size == 2)
	{
		if (stack->a[stack->pt_a] > stack->a[stack->pt_a - 1])
			return (swap_a(stack));
		return (0);
	}
	if (stack->size == 3)
		return (sort_tri_stack(stack));
	else if (stack->size == 4)
	{
		fetch(smallest(stack, stack->a, stack->pt_a), stack);
		return (sort_tri_stack(stack) + push_a(stack));
	}
	fetch(smallest(stack, stack->a, INT_MAX), stack);
	fetch(smallest(stack, stack->a, INT_MAX), stack);
	return (sort_tri_stack(stack) + push_a(stack) + push_a(stack));
}
