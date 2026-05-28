#include "libft.h"

void    ft_bzero(void *mem, size_t n)
{
	size_t          i;
	unsigned char   *ptr;

	i = 0;
	ptr = (unsigned char *)mem;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
