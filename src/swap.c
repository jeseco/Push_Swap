/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:38:01 by jcourtem          #+#    #+#             */
/*   Updated: 2022/06/29 12:19:07 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../include/libft.h"

int	swap_a(t_stack *stack)
{
	int	temp;

	if (stack->pt_a > 0)
	{
		temp = stack->a[stack->pt_a];
		stack->a[stack->pt_a] = stack->a[stack->pt_a - 1];
		stack->a[stack->pt_a - 1] = temp;
		ft_printf("sa\n");
		return (1);
	}
	ft_printf("ERROR! in swap_a");
	return (0);
}

int	swap_b(t_stack *stack)
{
	int	temp;

	if (stack->pt_b > 0)
	{
		temp = stack->b[stack->pt_b];
		stack->b[stack->pt_b] = stack->a[stack->pt_b - 1];
		stack->b[stack->pt_b - 1] = temp;
		ft_printf("sb\n");
		return (1);
	}
	ft_printf("ERROR! in swap_b");
	return (0);
}

int	swap_both(t_stack *stack)
{
	if (swap_a(stack))
	{
		if (swap_b(stack))
		{
			ft_printf("sb\n");
			return (1);
		}
		else
			ft_printf("ERROR IN SWAP BOTH FOR SWAP B!");
	}
	else
		ft_printf("ERROR IN SWAP BOTH FOR SWAP A!");
	return (0);
}
