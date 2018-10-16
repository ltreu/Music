/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 17:38:42 by smassand          #+#    #+#             */
/*   Updated: 2015/03/30 13:51:40 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char		*scpy;
	size_t		i;
	size_t		size;

	i = 0;
	size = ft_strlen(s);
	scpy = ft_strnew(len);
	if (scpy == NULL)
		return (NULL);
	if (start + len > size)
		return (NULL);
	while (i < len)
	{
		scpy[i] = s[start + i];
		i++;
	}
	return (scpy);
}
