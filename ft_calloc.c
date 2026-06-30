#include <libft.h>

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	total;

	total = num * size;
	ptr = malloc(total);
	if (!ptr)
		return (0);
	ft_bzero(ptr, total);
	return (ptr);
}
