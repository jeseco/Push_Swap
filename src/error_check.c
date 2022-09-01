/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:05:57 by jcourtem          #+#    #+#             */
/*   Updated: 2022/08/27 16:31:41 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

#include "../include/push_swap.h"
#include "../include/error_check.h"
#include "../include/error_digits.h"
#include "../include/error_int.h"
#include "../include/error_duplicate.h"
#include "../include/stack_utils.h"

bool	has_errors(int argc, char **argv)
{
	char	**arguments_list;

	if (argc == 2)
	{
		arguments_list = ft_split(argv[1], ' ');
		if (!has_only_digits(arguments_list))
		{
			ft_double_char_free(arguments_list);
			return (true);
		}
		ft_double_char_free(arguments_list);
		return (false);
	}
	arguments_list = argv + 1;
	if (!has_only_digits(arguments_list))
		return (true);
	return (false);
}
