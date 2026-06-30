#include <libft.h>

void *ft_memchr (const void *mem, int ch, size_t count)
{
	unsigned char c;
	unsigned char *ptr;
	int i;

	c = ch;
	ptr = (unsigned char *)mem;
	i = 0;
	while (i < count)
	{
		if (c == *ptr)
			return (mem + i);
	}
	return (0);
}
