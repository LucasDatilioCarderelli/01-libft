/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:35:12 by ldatilio          #+#    #+#             */
/*   Updated: 2021/09/09 22:08:34 by ldatilio         ###   ########.fr       */
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
			count++;
			while (s[i + 1] == c && s[i + 1] != '\0')
				i++;
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
	char	*start;
	size_t	len_word;

	idx = 0;
	start = (char *)s;
	while (idx < len_arr)
	{
		len_word = 0;
		while (*start == c && *start != 0)
			start++;
		while (start[len_word] != c && start[len_word] != '\0')
			len_word++;
		arr[idx] = ft_substr(start, 0, len_word);
		start += len_word;
		idx++;
	}
	arr[idx] = 0;
}

char	**ft_split(char const *s, char c)
{
	size_t	len_arr;
	char	**arr;

	if (!(s || c))
		return (0);
	len_arr = sepcounter(s, c);
	arr = malloc(sizeof(char *) * (len_arr + 1));
	if (!arr)
		return (NULL);
	fillarr(arr, len_arr, s, c);
	return (arr);
}
