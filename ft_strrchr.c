/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 18:47:49 by ldatilio          #+#    #+#             */
/*   Updated: 2021/09/03 19:31:50 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	fnd;

	while (*str != '\0')
	{
		str++;
		if (*str == c)
			fnd = *str;
	}
	if (fnd)
		return ((char *)str);
	return (0);
}
