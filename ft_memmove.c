#include <libft.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *ptr_dest;
	unsigned char *ptr_src;
	size_t i;

	i = 0;
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (ptr_dest > ptr_src)
	{
		while (n-- > 0)
			ptr_dest[n] = ptr_src[n];
	}
	else
	{
		while (i < n)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	}
	return (dest);
}
