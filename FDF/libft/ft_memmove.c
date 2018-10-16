/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 14:25:10 by smassand          #+#    #+#             */
/*   Updated: 2015/03/31 13:21:55 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*str;

	if (!src || !dest)
		return (NULL);
	if (n)
	{
		str = malloc(sizeof(char) * n);
		ft_memcpy(str, src, n);
		ft_memcpy(dest, str, n);
	}
	return (dest);
}
