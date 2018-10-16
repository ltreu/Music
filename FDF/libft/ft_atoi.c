/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/11 13:18:54 by smassand          #+#    #+#             */
/*   Updated: 2015/11/30 13:52:30 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int		i;
	int		result;
	int		sign;

	i = 0;
	result = 0;
	while (ft_isspace(nptr[i]) == 1)
		i++;
	sign = (nptr[i] == '-') ? -1 : 1;
	i += (nptr[i] == '+' || nptr[i] == '-') ? 1 : 0;
	if (nptr[i] && ft_isdigit(nptr[i]) == 1)
	{
		result = nptr[i] - 48;
		i++;
	}
	while (nptr[i] && ft_isdigit(nptr[i]) == 1)
	{
		result = result * 10 + (nptr[i] - 48);
		i++;
	}
	return (result * sign);
}
