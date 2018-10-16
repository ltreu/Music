/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 11:52:38 by smassand          #+#    #+#             */
/*   Updated: 2015/03/30 13:57:21 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *s1, const char *s2)
{
	size_t		i;
	size_t		len;

	i = 0;
	len = ft_strlen(s2);
	if (!*s2)
		return ((char *)s1);
	while (s1[i])
	{
		if (ft_strncmp(&s1[i], s2, len) == 0)
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
