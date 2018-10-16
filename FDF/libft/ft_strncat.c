/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/03 17:27:29 by smassand          #+#    #+#             */
/*   Updated: 2015/03/30 14:56:10 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	char	*dest1;

	i = 0;
	j = 0;
	dest1 = (char *)dest;
	while (dest1[i])
		i++;
	while (j < n)
	{
		dest1[i] = (char)src[j];
		i++;
		j++;
	}
	dest1[i] = '\0';
	return (dest1);
}
