/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 13:41:27 by smassand          #+#    #+#             */
/*   Updated: 2015/03/30 16:48:54 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		len;
	size_t		len2;
	size_t		n;

	n = size;
	len = ft_strlen(src);
	len2 = ft_strlen(dest) + len;
	while (*dest && size)
	{
		dest++;
		size--;
	}
	if (size == 0)
		return (n + len);
	i = 0;
	while (src[i] && size-- > 1)
	{
		*dest++ = src[i];
		i++;
	}
	*dest = '\0';
	return (len2);
}
