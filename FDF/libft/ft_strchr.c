/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/21 13:51:08 by smassand          #+#    #+#             */
/*   Updated: 2015/03/30 12:54:39 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	search;
	char	*s2;

	i = 0;
	if (s == NULL)
		return (NULL);
	search = (unsigned char)c;
	s2 = (char *)s;
	while (s2[i])
	{
		if ((unsigned char)s2[i] == search)
			return (&s2[i]);
		i++;
	}
	if ((unsigned char)s2[i] == search)
		return (&s2[i]);
	return (NULL);
}
