/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 10:43:00 by jcourtem          #+#    #+#             */
/*   Updated: 2022/07/07 11:08:06 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINI_SORT_H
# define MINI_SORT_H

# include "stack.h"
# include "push.h"
# include "rotate.h"
# include "swap.h"
# include "stack_utils.h"
# include "simplify_stack.h"

int	biggest(t_stack *stack, int *arr, int biggest);

int	smallest(t_stack *stack, int *arr, int smallest);

int	sort_tri_stack(t_stack *stack);

int	mini_sort(t_stack *stack);

#endif 
