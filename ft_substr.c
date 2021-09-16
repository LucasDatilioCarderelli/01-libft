/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:48:56 by ldatilio          #+#    #+#             */
/*   Updated: 2021/09/16 11:54:38 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	sub = malloc(sizeof(char) * (len + 1));
	if (s == NULL || sub == NULL)
		return (0);
	s_len = ft_strlen(s);
	if (s_len <= len)
		len = s_len - start;
	if (start > s_len)
		return (ft_strdup(""));
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
