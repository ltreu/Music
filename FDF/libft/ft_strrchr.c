/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/02 13:40:12 by smassand          #+#    #+#             */
/*   Updated: 2015/02/10 14:18:35 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s1;
	char	search;

	s1 = (char *)s;
	search = (unsigned char)c;
	i = ft_strlen(s1);
	while (i > 0)
	{
		if ((unsigned char)s1[i] == search)
			return (&s1[i]);
		i--;
	}
	if ((unsigned char)s1[i] == search)
		return (&s1[i]);
	return (NULL);
}
