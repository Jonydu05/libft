#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

void    ft_bzero(void *mem, size_t n);
void    *ft_memset(void *mem, int x, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_isalnum(int num);
int		ft_isalpha(int num);
int		ft_isascii(int num);
int		ft_isdigit(int num);
int		ft_isprint(int num);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
char    ft_tolower(char c);
char	ft_toupper(char c);

#endif