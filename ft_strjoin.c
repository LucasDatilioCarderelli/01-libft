/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:10:33 by ldatilio          #+#    #+#             */
/*   Updated: 2021/09/07 14:29:09 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;

	join = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	i = 0;
	while (*s1 != '\0')
	{
		join[i] = *s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		join[i] = *s2++;
		i++;
	}
	return (join);
}
