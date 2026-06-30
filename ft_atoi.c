int	is_number(char c);
int	allowed_chars(char c, int *num);
int	ft_atoi(char *str);
int	is_space(char c);

int	is_space(char c)
{
	if ((c > 8 && c < 14) || c == 32)
		return (1);
	return (0);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	allowed_chars(char c, int *num)
{
	if (is_number(c))
		return (1);
	if ((c == '+' || c == '-' || is_space(c)) && *num == 0)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	num;
	int	sign;
	int	temp;

	sign = 1;
	num = 0;
	while (*str != '\0')
	{
		if (!allowed_chars(*str, &num))
			break ;
		if (*str == '-')
			sign *= -1;
		if (is_number(*str))
		{
			temp = *str - '0';
			num = num * 10 + temp;
		}
		str++;
	}
	return (num * sign);
}
