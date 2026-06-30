#include <libft.h>

void    ft_bzero(void *mem, size_t n)
{
	unsigned char   *ptr;
	size_t          i;

	i = 0;
	ptr = (unsigned char *)mem;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
