/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 03:58:35 by jcourtem          #+#    #+#             */
/*   Updated: 2022/07/27 12:22:49 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_INIT_H
# define STACK_INIT_H

# include "stack.h"
# include <stdbool.h>

bool	check_for_neg(t_stack *stack);

void	multiple_args(t_stack *stack, int argc, char **argv);

void	simple_arg(t_stack *stack, char *arg);

void	get_stack_data(int argc, char **argv, t_stack *stack);

t_stack	stack_init(int argc, char **argv);

#endif
