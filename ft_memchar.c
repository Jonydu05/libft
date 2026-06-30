/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 15:51:38 by jzampier          #+#    #+#             */
/*   Updated: 2026/06/30 16:23:35 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mem, int ch, size_t count)
{
	unsigned char	c;
	unsigned char	*ptr;
	int				i;

	c = ch;
	ptr = (unsigned char *)mem;
	i = 0;
	while (i < count)
	{
		if (c == *ptr)
			return (mem + i);
	}
	return (0);
}
