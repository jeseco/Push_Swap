/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourem@student.42quebec.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 03:45:50 by jcourtem          #+#    #+#             */
/*   Updated: 2022/06/29 11:55:40 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_H
# define PUSH_H

# include "stack.h"

// push the first element of stack a on top of stack b
int	push_b(t_stack *stack);

// push the first element of stack b on top of stack a
int	push_a(t_stack *stack);

#endif
