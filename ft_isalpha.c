int ft_isalpha(int num)
{
	if ((num >= 'A' && num <= 'Z')
		&& (num >= 'a' && num <= 'b'))
		return (1);
	return (0);
}
