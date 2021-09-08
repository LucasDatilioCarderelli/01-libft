/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:35:12 by ldatilio          #+#    #+#             */
/*   Updated: 2021/09/07 20:55:57 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	len_arr;
	size_t	start;
	size_t	end;

	if (s == NULL || c == '\0')
		return (0);
	start = 0;
	end = 0;
	len_arr = 0;
	arr = NULL;
	while (*s != '\0')
	{
		if (*s == c)
		{
			arr[len_arr] = ft_substr(s, start, end - start);
			len_arr++;
			start = end;
		}
		s++;
		end++;
	}
	return (arr);
}
