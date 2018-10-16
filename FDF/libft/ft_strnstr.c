/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 13:21:17 by smassand          #+#    #+#             */
/*   Updated: 2015/03/31 13:28:53 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*s2cpy;
	char	*s1cpy;
	int		len;

	if (s2 == NULL)
		return (NULL);
	s2cpy = (char *)s2;
	s1cpy = (char *)s1;
	len = ft_strlen(s2cpy);
	i = 0;
	while (s1cpy[i] && (i + len) <= n)
	{
		if (ft_strncmp(s1 + i, s2, len) == 0)
			return (s1cpy + i);
		i++;
	}
	return (NULL);
}
