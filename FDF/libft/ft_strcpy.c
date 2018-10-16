/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/03 16:29:58 by smassand          #+#    #+#             */
/*   Updated: 2015/03/31 13:26:24 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strcpy(char *dest, const char *src)
{
	int			i;
	char		*srcpy;

	i = 0;
	srcpy = (char *)src;
	if (srcpy == NULL)
		return (NULL);
	while (src[i])
	{
		dest[i] = srcpy[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
