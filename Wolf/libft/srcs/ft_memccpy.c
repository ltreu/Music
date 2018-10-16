/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 10:46:48 by ltreu             #+#    #+#             */
/*   Updated: 2018/09/20 10:46:52 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst2;
	unsigned char	*src2;
	size_t			i;
	unsigned char	c2;

	i = 0;
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	c2 = (unsigned char)c;
	while (i < n)
	{
		dst2[i] = src2[i];
		if (src2[i] == c2)
			return ((unsigned char *)dst2 + i + 1);
		i++;
	}
	return (NULL);
}
