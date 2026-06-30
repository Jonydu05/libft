#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *temp;

	if (!s)
		return (0);
	*temp = malloc(len);
	return (ft_memcpy(temp, &s[start], len));
}
