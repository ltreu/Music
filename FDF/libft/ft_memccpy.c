/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 13:42:25 by smassand          #+#    #+#             */
/*   Updated: 2015/03/23 15:23:13 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*dest1;
	char		*src1;
	size_t		i;

	dest1 = (char *)dest;
	src1 = (char *)src;
	i = 0;
	while (i < n || src1[i])
	{
		dest1[i] = src1[i];
		if ((unsigned char)src1[i] == (unsigned char)c)
			return (dest1 + (i + 1));
		i++;
	}
	return (NULL);
}
