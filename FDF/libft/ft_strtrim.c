/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 14:20:10 by smassand          #+#    #+#             */
/*   Updated: 2015/03/30 14:55:13 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*scpy;
	int		len;

	if (s == NULL)
		return (NULL);
	while (*s == '\n' || *s == ' ' || *s == '\t')
		s++;
	len = ft_strlen(s);
	scpy = ft_strnew(len);
	if (scpy == NULL)
		return (NULL);
	scpy = ft_strcpy(scpy, s);
	while (len-- >= 0)
	{
		if (s[len] == '\n' || s[len] == ' ' || s[len] == '\t')
			scpy[len] = 0;
		else
			break ;
	}
	return (scpy);
}
