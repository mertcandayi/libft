/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medayi <medayi@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:08:37 by medayi            #+#    #+#             */
/*   Updated: 2024/11/11 20:01:28 by medayi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(const char *str);
int		ft_isalnum(int x);
int		ft_isalpha(int x);
int		ft_isascii(int x);
int		ft_isdigit(int x);
int		ft_isprint(int x);
int		ft_tolower(int x);
int		ft_toupper(int x);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *str, int x);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_itoa(int n);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t	ft_strlen(const char *str);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *ptr, int c, size_t num);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nbyte, size_t size);

#endif