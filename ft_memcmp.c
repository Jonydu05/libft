#include <libft.h>

int ft_memcmp(const void *lhs, const void *rhs, size_t count)
{
	unsigned char *left;
	unsigned char *right;
	size_t i;

	i = 0;
	left = (unsigned char *)lhs;
	right = (unsigned char *)rhs;
	while (i < count)
	{
		if ((left[i] - right[i]) != 0)
			return (left[i] - right[i]);
		i++;
	}
	return (0);
}
