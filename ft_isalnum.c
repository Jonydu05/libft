int ft_isalnum(int num)
{
    if (num >= '0' && num <= '9')
        return (1);
    if (num >= 'A' && num <= 'Z')
        return (1);
    if (num >= 'a' && num <= 'z')
        return (1);
    return (0);
}
