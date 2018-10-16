#include "../includes/fdf.h"

void			draw_x_three(t_map *sizes, t_point *points, int x, int y)
{
	points->z = sizes->map[y][x] > 0 ? sizes->map[y][x] + sizes->size_z :
				sizes->map[y][x];
	points->x0 = ((sizes->mod * x) + (sizes->pos_x - 100) + 5);
	points->y0 = ((sizes->mod * y) + (sizes->pos_y - 100)) + (5 -
					points->z);
	points->z = sizes->map[y][x + 1] > 0 ? sizes->map[y][x + 1] +
				sizes->size_z : sizes->map[y][x + 1];
	points->x1 = ((sizes->mod * (x + 1)) + (sizes->pos_x - 100) + 5);
	points->y1 = ((sizes->mod * y) + (sizes->pos_y - 100)) + (5 -
					points->z);
	points->z = sizes->map[y][x + 1] > sizes->map[y][x] ?
					sizes->map[y][x + 1] + sizes->size_z :
					sizes->map[y][x] + sizes->size_z;
	drawing_line(*points, sizes);
}

void			draw_y_three(t_map *sizes, t_point *points, int x, int y)
{
	points->z = sizes->map[y][x + 1] > 0 ? sizes->map[y][x + 1] +
				sizes->size_z : sizes->map[y][x + 1];
	points->x0 = (sizes->mod * (x + 1) + (sizes->pos_x - 100) + 5);
	points->y0 = ((sizes->mod * y) + (sizes->pos_y - 100)) + (5 -
					points->z);
	points->z = sizes->map[y + 1][x + 1] > 0 ? sizes->map[y + 1][x + 1] +
				sizes->size_z : sizes->map[y + 1][x + 1];
	points->x1 = ((sizes->mod * (x + 1)) + (sizes->pos_x - 100) + 5);
	points->y1 = ((sizes->mod * (y + 1)) + (sizes->pos_y - 100)) + (5 -
					points->z);
	points->z = sizes->map[y + 1][x + 1] > sizes->map[y][x + 1] ?
					sizes->map[y + 1][x + 1] + sizes->size_z :
					sizes->map[y][x + 1] + sizes->size_z;
	drawing_line(*points, sizes);
}

void			drawing_basic(t_map *sizes, int y)
{
	int			x;
	t_point		p2;

	while (y < sizes->size_y - 1)
	{
		x = 0;
		while (x < sizes->size_x - 1)
		{
			if (x == 0 && (y + 1 < sizes->size_y) &&
				(x < sizes->len[y + 1] - 1) && (x + 1 < sizes->len[y]))
				draw_y_three(sizes, &p2, x - 1, y);
			if ((y == sizes->size_y - 2) && (x + 1 < sizes->len[y]))
				draw_x_three(sizes, &p2, x, y + 1);
			if (x + 1 < sizes->len[y])
				draw_x_three(sizes, &p2, x, y);
			if ((y + 1 < sizes->size_y) && (x + 1 < sizes->len[y + 1])
					&& (x + 1 < sizes->len[y]))
				draw_y_three(sizes, &p2, x, y);
			x++;
		}
		if (y == sizes->size_y && (x + 1 < sizes->len[y]))
			draw_x_three(sizes, &p2, x, y);
		y++;
	}
}
