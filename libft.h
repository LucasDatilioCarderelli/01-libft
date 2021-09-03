/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 20:35:20 by ldatilio          #+#    #+#             */
/*   Updated: 2021/09/02 22:27:43 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

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
// char			*ft_itoa(int n);
// str
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char*restrict dst, char*restrict src, size_t destsize);
size_t	ft_strlcpy(char*restrict dst, char*restrict src, size_t destsize);

// char 		*strchr(const char *str, int c);
// char 		*strrchr(const char *str, int c);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);

// ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c
// ft_memchr.c ft_memcmp.c ft_strdup.c ft_calloc.c ft_itoa.c
// ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
// ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c
#endif