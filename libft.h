/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 20:35:20 by ldatilio          #+#    #+#             */
/*   Updated: 2021/09/06 15:57:56 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

/* ********************************* Part 1 ********************************* */
// is
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);
// to
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
// strl
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, char *src, size_t destsize);
size_t	ft_strlcpy(char *dst, char *src, size_t destsize);
// str
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
// mem
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
// void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_bzero(void *s, size_t n);
// malloc
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);

/* ********************************* PART 2 ********************************* */

char	*ft_itoa(int n);

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char 	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void 	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
