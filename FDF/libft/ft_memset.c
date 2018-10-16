/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 11:57:48 by smassand          #+#    #+#             */
/*   Updated: 2015/03/31 13:23:46 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	char		*s_cpy;

	i = 0;
	s_cpy = (char *)s;
	if (!s || !n)
		return (s);
	while (i < n)
	{
		s_cpy[i] = c;
		i++;
	}
	return (s);
}
