/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 15:29:35 by smassand          #+#    #+#             */
/*   Updated: 2015/03/23 11:50:49 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*s1;

	i = 0;
	s1 = (char *)s;
	if (!s1)
		return (NULL);
	while (i < n)
	{
		if ((unsigned char)s1[i] == (unsigned char)c)
			return ((void *)(s1 + i));
		i++;
	}
	return (NULL);
}
