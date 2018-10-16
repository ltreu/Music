/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 09:51:02 by ltreu             #+#    #+#             */
/*   Updated: 2018/09/20 09:51:15 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_neg(int *n, int *neg)
{
	if (*n < 0)
	{
		*n *= -1;
		*neg = 1;
	}
}

char		*ft_itoa(int n)
{
	int		neg;
	char	*str;
	int		len;
	int		tmp;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	tmp = n;
	neg = 0;
	ft_neg(&n, &neg);
	len = 2;
	len += neg;
	while (tmp /= 10)
		len++;
	if ((str = (char *)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
