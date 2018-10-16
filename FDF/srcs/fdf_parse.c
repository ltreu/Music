#include "../includes/fdf.h"

int			array_len(char **a)
{
	int		i;

	i = 0;
	if (a)
	{
		while (a[i])
			i++;
		return (i);
	}
	return (-1);
}

char		**get_file_content(t_map sizes)
{
	int		ret;
	char	buff[32];
	char	*content;
	char	*tmp;

	content = ft_strnew(1);
	tmp = NULL;
	if (sizes.fd != -1)
	{
		while ((ret = read(sizes.fd, buff, 31)))
		{
			buff[ret] = 0;
			tmp = content;
			content = ft_strjoin(content, buff);
			free(tmp);
		}
		close(sizes.fd);
	}
	sizes.raw_map = ft_strsplit(content, '\n');
	return (sizes.raw_map);
}

int			get_map_size(t_map *sizes)
{
	int		y;
	char	**tmp;
	int		i;

	sizes->size_y = array_len(sizes->raw_map);
	sizes->len = (int *)malloc(sizeof(int) * sizes->size_y);
	sizes->size_x = 0;
	y = 0;
	while (sizes->raw_map[y])
	{
		tmp = ft_strsplit(sizes->raw_map[y], ' ');
		sizes->len[y] = array_len(tmp);
		if (array_len(tmp) > sizes->size_x)
			sizes->size_x = array_len(tmp);
		i = 0;
		while (tmp[i])
			free(tmp[i++]);
		free(tmp);
		y++;
	}
	return (0);
}

void		create_map(t_map *sizes, int y)
{
	int		x;
	int		i;
	char	**tmp;

	sizes->map = (int **)malloc(sizeof(int *) * sizes->size_y);
	while (y < sizes->size_y)
	{
		x = 0;
		sizes->map[y] = (int *)malloc(sizeof(int) * sizes->size_x + 1);
		tmp = ft_strsplit(sizes->raw_map[y], ' ');
		while (x < sizes->size_x)
		{
			if (x < array_len(tmp))
				sizes->map[y][x] = ft_atoi(tmp[x]);
			else
				sizes->map[y][x] = 0;
			x++;
		}
		i = 0;
		while (tmp[i])
			free(tmp[i++]);
		free(tmp);
		y++;
	}
}
