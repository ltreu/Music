/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 14:03:21 by smassand          #+#    #+#             */
/*   Updated: 2015/03/30 13:15:28 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(const char *s1, const char *s2)
{
	size_t		s1len;
	size_t		s2len;
	char		*s3;

	s1len = ft_strlen((char *)s1);
	s2len = ft_strlen((char *)s2);
	s3 = malloc(sizeof(char) * (s1len + s2len + 1));
	if (s3 == NULL)
		return (NULL);
	s3[s1len + s2len] = 0;
	s3[0] = 0;
	if (s1len > 0)
		ft_strcat(s3, (char *)s1);
	if (s2len > 0)
		ft_strcat(s3, (char *)s2);
	return (s3);
}
