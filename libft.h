#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(char *str, char *to_find, size_t len);
char	*ft_strdup(char *src);
char	*ft_strjoin(int size, char **strs, char *sep);
void    *ft_memset(void *mem, int x, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *mem, int ch, size_t count);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_calloc(size_t num, size_t size);
void    ft_bzero(void *mem, size_t n);
int		ft_memcmp(const void *lhs, const void *rhs, size_t count);
int		ft_isalnum(int num);
int		ft_isalpha(int num);
int		ft_isascii(int num);
int		ft_isdigit(int num);
int		ft_isprint(int num);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char    ft_tolower(char c);
char	ft_toupper(char c);
size_t	ft_strlcat(char *dest, char *src, size_t size);

#endif