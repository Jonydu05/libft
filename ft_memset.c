// verificar o tipo correto, dps (unsigned int ou size_t (teria que fazer o include do stdlib))
void *ft_memset(void *ptr, int x, size_t n)
{
    size_t i;
    unsigned char *p;

    i = 0;
    p = (unsigned char *)ptr;
    while (i < n)
    {
        p[i] = x;
        i++;
    }
    return (ptr);
}
