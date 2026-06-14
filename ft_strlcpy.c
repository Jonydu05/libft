#include <libft.h>

size_t ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t i;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
