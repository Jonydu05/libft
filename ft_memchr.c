/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 15:51:38 by jzampier          #+#    #+#             */
/*   Updated: 2026/07/02 17:56:21 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mem, int ch, size_t count)
{
	unsigned char	c;
	unsigned char	*ptr;
	size_t			i;

	c = ch;
	ptr = (unsigned char *)mem;
	i = 0;
	while (i < count)
	{
		if (c == *ptr)
			return ((void *)&mem[i]);
		i++;
	}
	return (NULL);
}
