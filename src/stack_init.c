/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:20:32 by jcourtem          #+#    #+#             */
/*   Updated: 2022/08/27 16:15:41 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

#include "../include/push_swap.h"
#include "../include/libft.h"

void	multiple_args(t_stack *stack, int argc, char **argv)
{
	int		i;
	long	d;

	stack->size = argc - 1;
	stack->a = ft_calloc(1, sizeof(int) * stack->size);
	i = 0;
	argc--;
	while (argc != 0)
	{
		d = ft_atol(argv[argc]);
		stack->a[i++] = (int)d;
		argc--;
	}
}

void	single_arg(t_stack *stack, char *arg)
{
	int		i;
	int		j;
	long	d;
	char	**temp_char_arr;

	temp_char_arr = ft_split(arg, ' ');
	stack->size = double_arr_len(temp_char_arr);
	j = stack->size - 1;
	i = 0;
	stack->a = ft_calloc(1, sizeof(int) * stack->size);
	while (j >= 0)
	{
		d = ft_atol(temp_char_arr[i++]);
		stack->a[j--] = (int)d;
	}
	ft_double_char_free(temp_char_arr);
}

void	get_stack_data(int argc, char **argv, t_stack *stack)
{
	if (argc == 2)
		single_arg(stack, argv[1]);
	else
		multiple_args(stack, argc, argv);
}

t_stack	stack_init(int argc, char **argv)
{
	t_stack	stack;

	get_stack_data(argc, argv, &stack);
	stack.b = ft_calloc(1, sizeof(int) * stack.size);
	stack.count = ft_calloc(1, sizeof(int) * stack.size);
	stack.pt_b = 0;
	stack.pt_a = (stack.size - 1);
	return (stack);
}
