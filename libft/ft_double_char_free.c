/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_char_free.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 09:44:19 by jcourtem          #+#    #+#             */
/*   Updated: 2022/08/27 16:25:37 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_double_char_free(char **arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		free (arg[i]);
		i++;
	}
	free (arg);
}
