/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_digits.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:57:18 by jcourtem          #+#    #+#             */
/*   Updated: 2022/08/26 14:21:22 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_DIGITS_H
# define ERROR_DIGITS_H

/* has_only_digits use nested loop to check if any char used in elements found
/	if allows for a single '-' to be placed at the beginning of the element, in
/	order to allow negative integers.
/	after that, any characters composing the elements found in arr[i] must be 
/	('0'-'9' / 48-57) arcii char
/	if they are not, has_only_digits return (false)
*/

bool	has_only_digits(char **arr);

#endif