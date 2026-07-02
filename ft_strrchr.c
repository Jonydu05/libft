/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 15:52:14 by jzampier          #+#    #+#             */
/*   Updated: 2026/07/02 18:17:20 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*found;
	int		i;

	found = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			found = (char *)&s[i];
		i++;
	}
	return (found);
}
