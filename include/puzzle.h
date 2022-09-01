/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourem@student.42quebec.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 02:16:29 by jcourtem          #+#    #+#             */
/*   Updated: 2022/06/10 04:10:42 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUZZLE_H
# define PUZZLE_H

# include "stack.h"
/* void puzzle(t_stack stack)
 * inputs: 
 * 1. stack: a structure containing stack a and b
 *
 * Description: 
 * Puzzle is a visualizer for push_swap. It will allow me to see what is going 
 * on while I tell commands to it and try to solve the stack.
 *
 * Output: 
 * the amount of move taken to sort the stack. 
 */

int	puzzle(t_stack *stack);

#endif // PUZZLE_H 
