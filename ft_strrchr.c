char *ft_strrchr(const char *s, int c)
{
	char *found;

	found = 0;
	while(*s)
	{
		if (*s && *s == c)
			found = s;
		*s++;
	}
	return (found);
}
