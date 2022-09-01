/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourem@student.42quebec.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 03:49:30 by jcourtem          #+#    #+#             */
/*   Updated: 2022/06/29 11:56:26 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROTATE_H
# define ROTATE_H

# include "stack.h"

// rotate the element of stack a, the first element becomes the last and every 
// other element is shifted up.
int	rotate_a(t_stack *stack);

// same as rotate_a but on stack b
int	rotate_b(t_stack *stack);

// reverse of rotate_a
int	reverse_rotate_a(t_stack *stack);

// reverse of rotate_b
int	reverse_rotate_b(t_stack *stack);
#endif
