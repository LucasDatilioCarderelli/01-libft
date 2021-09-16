/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:35:12 by ldatilio          #+#    #+#             */
/*   Updated: 2021/09/16 14:33:55 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	sepcounter(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i + 1] == c && s[i + 1] != '\0')
				i++;
			count++;
		}
		i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

static void	fillarr(char **arr, size_t len_arr, char const *s, char c)
{
	size_t	idx;
	size_t	len_word;

	idx = 0;
	while (idx < len_arr)
	{
		len_word = 0;
		while (*s == c && *s != 0)
			s++;
		while (s[len_word] != c && s[len_word] != '\0')
			len_word++;
		arr[idx] = ft_substr(s, 0, len_word);
		s += len_word;
		idx++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	len_arr;
	char	**arr;

	if (!s)
		return (0);
	len_arr = sepcounter(s, c);
	arr = malloc(sizeof(char *) * (len_arr + 1));
	if (!arr)
		return (NULL);
	fillarr(arr, len_arr, s, c);
	return (arr);
}
