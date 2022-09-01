/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 04:14:51 by jcourtem          #+#    #+#             */
/*   Updated: 2022/07/07 13:35:12 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "../include/sort.h"
#include "../include/stack_utils.h"
#include "../include/rotate.h"
#include "../include/swap.h"
#include "../include/mini_sort.h"

int	get_upper_bit(int nu)
{
	int	highest_bit;
	int	reference_bit;
	int	bound;

	bound = 1 << 30;
	reference_bit = 1;
	while (reference_bit < bound)
	{
		if (nu & reference_bit)
			highest_bit = reference_bit;
		reference_bit <<= 1;
	}
	return (highest_bit);
}

int	sort(t_stack *stack)
{
	int	hi_bit;
	int	reference_bit;
	int	top_of_the_stack;

	hi_bit = get_upper_bit(biggest(stack, stack->a, stack->a[stack->pt_a]));
	reference_bit = 1;
	while (reference_bit <= hi_bit)
	{
		while ((stack->a[stack->pt_a] & reference_bit) == 0)
			push_b(stack);
		top_of_the_stack = stack->a[stack->pt_a];
		rotate_a(stack);
		while (stack->a[stack->pt_a] != top_of_the_stack)
		{
			if (reference_bit & stack->a[stack->pt_a])
				rotate_a(stack);
			else
				push_b(stack);
		}
		reference_bit <<= 1;
		while (stack->b[stack->pt_b])
			push_a(stack);
	}
	return (1);
}
