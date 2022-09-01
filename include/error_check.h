/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 03:43:56 by jcourtem          #+#    #+#             */
/*   Updated: 2022/08/26 14:15:30 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_CHECK_H
# define ERROR_CHECK_H

# include <stdbool.h>

# include "push_swap.h"
# include "error_digits.h"
# include "error_int.h"
# include "error_duplicate.h"

bool	has_errors(int argc, char **argv);

#endif
