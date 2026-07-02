/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 15:52:11 by jzampier          #+#    #+#             */
/*   Updated: 2026/07/02 18:15:49 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t	index;
	size_t	substring_index;

	index = 0;
	if (*to_find == '\0')
		return (str);
	while (str[index] != '\0' && index < len)
	{
		substring_index = 0;
		while (to_find[substring_index] != '\0'
			&& str[index + substring_index] == to_find[substring_index])
		{
			substring_index++;
		}
		if (to_find[substring_index] == '\0')
			return (&str[index]);
		index++;
	}
	return ((void *)0);
}
