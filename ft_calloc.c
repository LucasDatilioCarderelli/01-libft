/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 18:42:50 by ldatilio          #+#    #+#             */
/*   Updated: 2021/09/05 18:53:12 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dst;
	size_t	tot_size;

	tot_size = nmemb * size;
	if (tot_size == 0)
		return (NULL);
	dst = malloc(tot_size);
	ft_bzero(dst, tot_size);
	return (dst);
}
