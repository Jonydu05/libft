/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzampier <jzampier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 15:52:26 by jzampier          #+#    #+#             */
/*   Updated: 2026/07/02 13:51:39 by jzampier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(char *str, char *to_find, size_t len);
char	*ft_strdup(char *src);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	*ft_memset(void *mem, int x, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *mem, int ch, size_t count);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_calloc(size_t num, size_t size);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_bzero(void *mem, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
int		ft_memcmp(const void *lhs, const void *rhs, size_t count);
int		ft_isalnum(int num);
int		ft_isalpha(int num);
int		ft_isascii(int num);
int		ft_isdigit(int num);
int		ft_isprint(int num);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	ft_tolower(char c);
char	ft_toupper(char c);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlcat(char *dest, char *src, size_t size);

#endif