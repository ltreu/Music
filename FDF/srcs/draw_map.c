/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 15:28:24 by ltreu             #+#    #+#             */
/*   Updated: 2018/08/02 15:38:40 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int				drawing_color(t_point points, t_map sizes)
{
	if (points.z < 0)
		sizes.color = put_color(sizes.color + 0);
	else if (points.z >= 0 && points.z < 10)
		sizes.color = put_color(sizes.color + 1);
	else if (points.z >= 10 && points.z < 20)
		sizes.color = put_color(sizes.color + 2);
	else if (points.z >= 20 && points.z < 50)
		sizes.color = put_color(sizes.color + 3);
	else if (points.z >= 50 && points.z < 70)
		sizes.color = put_color(sizes.color + 4);
	else if (points.z >= 70)
		sizes.color = put_color(sizes.color + 5);
	else
		sizes.color = WHITE;
	return (sizes.color);
}

void			drawing_line(t_point points, t_map *sizes)
{
	t_draw		drawing;

	drawing.dx = fabs(points.x1 - points.x0);
	drawing.dy = fabs(points.y1 - points.y0);
	drawing.sx = points.x0 < points.x1 ? 1 : -1;
	drawing.sy = points.y0 < points.y1 ? 1 : -1;
	drawing.err = (drawing.dx > drawing.dy ? drawing.dx : -drawing.dy) / 2;
	while (42)
	{
		mlx_pixel_put(sizes->mlx, sizes->win, points.x0, points.y0,
						drawing_color(points, *sizes));
		if (points.x0 == points.x1 && points.y0 == points.y1)
			break ;
		drawing.e2 = drawing.err;
		if (drawing.e2 > -drawing.dx)
		{
			drawing.err -= drawing.dy;
			points.x0 += drawing.sx;
		}
		if (drawing.e2 < drawing.dy)
		{
			drawing.err += drawing.dx;
			points.y0 += drawing.sy;
		}
	}
}

void			draw_x(t_map *sizes, t_point *points, int x, int y)
{
	points->z = sizes->map[y][x] > 0 ? sizes->map[y][x] + sizes->size_z :
				sizes->map[y][x];
	points->x0 = (sizes->mod * x) + (sizes->pos_x + (x - y *
					(sizes->mod / 2)));
	points->y0 = (sizes->mod * y) + ((sizes->pos_y - 1 +
					(x - y * (sizes->mod / 2))) - points->z);
	points->z = sizes->map[y][x + 1] > 0 ? sizes->map[y][x + 1] +
				sizes->size_z : sizes->map[y][x + 1];
	points->x1 = (sizes->mod * (x + 1)) + (sizes->pos_x +
					(x - y * (sizes->mod / 2)));
	points->y1 = (sizes->mod * y) + ((sizes->pos_y + (x - y *
					(sizes->mod / 2))) - points->z);
	points->z = sizes->map[y][x + 1] > sizes->map[y][x] ?
					sizes->map[y][x + 1] + sizes->size_z :
					sizes->map[y][x] + sizes->size_z;
	drawing_line(*points, sizes);
}

void			draw_y(t_map *sizes, t_point *points, int x, int y)
{
	points->z = sizes->map[y][x + 1] > 0 ? sizes->map[y][x + 1] +
				sizes->size_z : sizes->map[y][x + 1];
	points->x0 = (sizes->mod * (x + 1)) + (sizes->pos_x + (x - y *
					(sizes->mod / 2)));
	points->y0 = (sizes->mod * y) + (sizes->pos_y + (x - y *
					(sizes->mod / 2)) - points->z);
	points->z = sizes->map[y + 1][x + 1] > 0 ? sizes->map[y + 1][x + 1] +
				sizes->size_z : sizes->map[y + 1][x + 1];
	points->x1 = (sizes->mod * (x + 1)) + (sizes->pos_x + ((x -
					(sizes->mod / 2)) - y * (sizes->mod / 2)));
	points->y1 = (sizes->mod * (y + 1)) + (sizes->pos_y + (x - (y + 1) *
					(sizes->mod / 2)) -
					points->z);
	points->z = sizes->map[y + 1][x + 1] > sizes->map[y][x + 1] ?
					sizes->map[y + 1][x + 1] + sizes->size_z :
					sizes->map[y][x + 1] + sizes->size_z;
	drawing_line(*points, sizes);
}

void			drawing_iso(t_map *sizes, int y)
{
	int			x;
	t_point		points;

	while (y < sizes->size_y - 1)
	{
		x = 0;
		while (x < sizes->size_x - 1)
		{
			if (x == 0 && (y + 1 < sizes->size_y) &&
				(x < sizes->len[y + 1] - 1) && (x + 1 < sizes->len[y]))
				draw_y(sizes, &points, x - 1, y);
			if ((y == sizes->size_y - 2) && (x + 1 < sizes->len[y]))
				draw_x(sizes, &points, x, y + 1);
			if (x + 1 < sizes->len[y])
				draw_x(sizes, &points, x, y);
			if ((y + 1 < sizes->size_y) && (x + 1 < sizes->len[y + 1])
					&& (x + 1 < sizes->len[y]))
				draw_y(sizes, &points, x, y);
			x++;
		}
		if (y == sizes->size_y && (x + 1 < sizes->len[y]))
			draw_x(sizes, &points, x, y);
		y++;
	}
}
