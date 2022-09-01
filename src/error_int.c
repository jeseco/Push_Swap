/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:07:25 by jcourtem          #+#    #+#             */
/*   Updated: 2022/08/26 16:00:43 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <limits.h>

#include "../include/push_swap.h"
#include "../include/error_int.h"
#include "../include/error_duplicate.h"

bool	has_only_int(long *d, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		if (d[i] < INT_MIN || INT_MAX < d[i])
			return (false);
		i++;
	}
	if (!no_duplicate_values(d, len))
		return (false);
	return (true);
}
