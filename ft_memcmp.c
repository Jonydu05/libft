/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 15:51:42 by jzampier          #+#    #+#             */
/*   Updated: 2026/06/30 18:59:40 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *lhs, const void *rhs, size_t count)
{
	unsigned char	*left;
	unsigned char	*right;
	size_t			i;

	i = 0;
	left = (unsigned char *)lhs;
	right = (unsigned char *)rhs;
	while (i < count)
	{
		if ((left[i] - right[i]) != 0)
			return (left[i] - right[i]);
		i++;
	}
	return (NULL);
}
