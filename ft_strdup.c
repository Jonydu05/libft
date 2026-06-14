#include <libft.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*new_str;

	i = 0;
	size = ft_strlen(src);
	new_str = malloc(size + 1 * sizeof(char));
	while (i < size)
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
