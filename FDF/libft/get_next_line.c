/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/04 14:44:49 by smassand          #+#    #+#             */
/*   Updated: 2018/08/02 15:27:35 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"

int			ft_line(char *boeuf, int i)
{
	while (boeuf[i])
	{
		if (boeuf[i] == '\n')
			return (i);
		i++;
	}
	return (0);
}

int			ft_boeuf(int ret, char **boeuf)
{
	if (ret == 0 && **boeuf)
	{
		ft_strdel(boeuf);
		return (1);
	}
	return (0);
}

int			verif(char **boeuf, char ***line, char *buf, int ret)
{
	int		i;

	i = 0;
	buf[ret] = '\0';
	*boeuf = ft_strjoin(*boeuf, buf);
	i = ft_line(*boeuf, i);
	if (i > 0 || *(boeuf)[i] == '\n')
	{
		**line = ft_strsub(*boeuf, 0, (i));
		*boeuf = ft_strsub(*boeuf, (i + 1), ft_strlen(*boeuf) - i - 1);
		return (1);
	}
	return (0);
}

int			get_next_line(int const fd, char **line)
{
	int			ret;
	static char	*boeuf = NULL;
	char		buf[BOEUF_SIZE + 1];

	buf[BOEUF_SIZE] = '\0';
	if (*line == NULL)
		*line = ft_strnew(BOEUF_SIZE + 1);
	if (boeuf == NULL)
		boeuf = ft_strnew(BOEUF_SIZE + 1);
	if (boeuf == NULL || *line == NULL)
		return (-1);
	while ((ret = read(fd, buf, BOEUF_SIZE)) != 0)
	{
		if (ret == -1)
			return (-1);
		if (verif(&boeuf, &line, buf, ret) == 1)
			return (1);
	}
	*line = ft_strsub(boeuf, 0, ft_strlen(boeuf));
	return (ft_boeuf(ret, &boeuf));
}
