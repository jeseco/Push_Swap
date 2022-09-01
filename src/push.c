/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:39:41 by jcourtem          #+#    #+#             */
/*   Updated: 2022/06/29 12:08:14 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push.h"

#include "../include/libft.h"

int	push_b(t_stack *stack)
{
	if (stack->a[stack->pt_a] != '\0')
	{
		if (stack->b[stack->pt_b] != '\0')
			stack->pt_b++;
		stack->b[stack->pt_b] = stack->a[stack->pt_a];
		stack->a[stack->pt_a] = '\0';
		if (stack->pt_a > 0)
			stack->pt_a--;
		ft_printf("pb\n");
		return (1);
	}
	ft_printf("Error Stack a empty!");
	return (0);
}

int	push_a(t_stack *stack)
{
	if (stack->b[stack->pt_b] != '\0')
	{
		if (stack->a[stack->pt_a] != '\0')
			stack->pt_a++;
		stack->a[stack->pt_a] = stack->b[stack->pt_b];
		stack->b[stack->pt_b] = '\0';
		if (stack->pt_b > 0)
			stack->pt_b--;
		ft_printf("pa\n");
		return (1);
	}
	ft_printf("error! Stack b full\n");
	return (0);
}
