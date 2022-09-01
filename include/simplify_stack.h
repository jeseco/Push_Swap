/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simplify_stack.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 03:54:11 by jcourtem          #+#    #+#             */
/*   Updated: 2022/08/27 17:31:53 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIMPLIFY_STACK_H
# define SIMPLIFY_STACK_H

# include "push_swap.h"
# include "stack.h"

void	cp_stack(t_stack *stack, int *dest, int *src);

void	simplify_stack(t_stack *stack);

#endif
