/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:03:34 by jcourtem          #+#    #+#             */
/*   Updated: 2022/06/29 12:13:27 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/rotate.h"
#include "../include/libft.h"

int	rotate_a(t_stack *stack)
{
	int	temp;
	int	i;

	if (stack->a[stack->pt_a] != '\0' && stack->pt_a != 0)
	{
		temp = stack->a[stack->pt_a];
		i = stack->pt_a - 1;
		stack->a[stack->pt_a] = stack->a[i];
		while (i)
		{
			stack->a[i] = stack->a[i - 1];
			i--;
		}
		stack->a[i] = temp;
		ft_printf("ra\n");
		return (1);
	}
	return (0);
}

int	rotate_b(t_stack *stack)
{
	int	temp;
	int	i;

	if (stack->b[stack->pt_b] != '\0' && stack->pt_b != 0)
	{
		temp = stack->b[stack->pt_b];
		i = stack->pt_b - 1;
		stack->b[stack->pt_b] = stack->b[i];
		while (i)
		{
			stack->b[i] = stack->b[i - 1];
			i--;
		}
		stack->b[i] = temp;
		ft_printf("rb\n");
		return (1);
	}
	return (0);
}

int	reverse_rotate_a(t_stack *stack)
{
	int	temp;
	int	i;

	if (stack->a[stack->pt_a] != '\0' && stack->pt_a != 0)
	{
		temp = stack->a[0];
		i = 0;
		while (i < stack->pt_a)
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		stack->a[stack->pt_a] = temp;
		ft_printf("rra\n");
		return (1);
	}
	return (0);
}

int	reverse_rotate_b(t_stack *stack)
{
	int	temp;
	int	i;

	if (stack->b[stack->pt_b] != '\0' && stack->pt_b != 0)
	{
		temp = stack->b[0];
		i = 0;
		while (i < stack->pt_b)
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->b[stack->pt_b] = temp;
		ft_printf("rrb\n");
		return (1);
	}
	return (0);
}
