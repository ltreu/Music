/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 12:17:07 by smassand          #+#    #+#             */
/*   Updated: 2015/03/31 13:18:43 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_abs(int n)
{
	int		val;

	val = (n < 0) ? -n : n;
	return (val);
}

char		*ft_itoa(int n)
{
	int		len;
	int		integer;
	char	*s;

	s = NULL;
	len = (n < 0) ? 2 : 1;
	integer = n;
	while (integer > 9 || integer < -9)
	{
		len++;
		integer = ft_abs(integer / 10);
	}
	if ((s = (char *)malloc((len + 1) * sizeof(*s))))
	{
		s[len--] = '\0';
		integer = n;
		while (len + 1)
		{
			s[len--] = '0' + ft_abs(integer % 10);
			integer = ft_abs(integer / 10);
		}
		if (n < 0)
			s[0] = '-';
	}
	return (s);
}
