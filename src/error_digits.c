/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:56:11 by jcourtem          #+#    #+#             */
/*   Updated: 2022/09/01 10:49:03 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../include/error_digits.h"
#include "../include/error_int.h"

bool	next_test(char **arr)
{
	int		i;
	long	*d;

	i = 0;
	d = ft_calloc(1, sizeof(long) * double_arr_len(arr));
	while (arr[i])
	{
		d[i] = ft_atol(arr[i]);
		i++;
	}
	if (!has_only_int(d, double_arr_len(arr)))
	{
		free (d);
		return (false);
	}
	free (d);
	return (true);
}

bool	has_only_digits(char **arr)
{
	int		i;
	int		j;

	i = 0;
	while (arr[i])
	{
		j = 0;
		if (arr[i][j] == '-')
		{
			if (arr[i][j + 1] < 48 || 57 < arr[i][j + 1])
				return (false);
			j++;
		}
		while (arr[i][j])
		{
			if (arr[i][j] < 48 || 57 < arr[i][j])
				return (false);
			j++;
		}
		i++;
	}
	return (next_test(arr));
}
