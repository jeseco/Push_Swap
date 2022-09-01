/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 04:01:52 by jcourtem          #+#    #+#             */
/*   Updated: 2022/08/27 17:17:05 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_UTILS_H
# define STACK_UTILS_H

# include <stdbool.h>

# include "stack.h"

int		double_arr_len(char **arr);

int		arr_len(int *arr);

bool	a_is_sorted(t_stack *stack);

void	free_stack(t_stack *stack);

void	output_stack(t_stack *stack);

#endif
