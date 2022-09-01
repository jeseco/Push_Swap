/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:11:32 by jcourtem          #+#    #+#             */
/*   Updated: 2022/08/26 15:51:21 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

#include "../include/push_swap.h"
#include "../include/error_duplicate.h"

bool	no_duplicate_values(long *d, int len)
{
	int	i;
	int	j;

	i = 0;
	if (d)
	{
		while (i < len - 1)
		{
			j = i + 1;
			while (j < len)
			{
				if (d[i] == d[j])
					return (false);
				j++;
			}
			i++;
		}
	}
	return (true);
}
