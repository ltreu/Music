/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 16:03:06 by smassand          #+#    #+#             */
/*   Updated: 2015/03/24 15:10:28 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f) (char))
{
	int		i;
	char	*str;
	int		size;

	i = 0;
	size = ft_strlen((char *)s);
	str = (char *)ft_memalloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
