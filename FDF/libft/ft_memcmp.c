/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 15:58:43 by smassand          #+#    #+#             */
/*   Updated: 2015/03/16 12:58:46 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*s1cpy;
	char	*s2cpy;

	i = 0;
	s1cpy = (char *)s1;
	s2cpy = (char *)s2;
	while (i < (int)n)
	{
		if (s1cpy[i] != s2cpy[i])
			return ((unsigned char)s1cpy[i] - (unsigned char)s2cpy[i]);
		i++;
	}
	return (0);
}
