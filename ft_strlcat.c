/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 21:11:04 by ldatilio          #+#    #+#             */
/*   Updated: 2021/09/02 22:26:52 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char*restrict dst, char*restrict src, size_t destsize)
{
	size_t	destlen;
	size_t	i;

	if (destsize <= ft_strlen(dst))
		return (destsize + ft_strlen(src));
	destlen = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && destlen + i < destsize - 1)
	{
		dst[destlen + i] = src[i];
		i++;
	}
	dst[destlen + i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
