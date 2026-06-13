#include <libft.h>

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	int	index;
	int	substring_index;

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
