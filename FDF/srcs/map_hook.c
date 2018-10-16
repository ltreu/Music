#include "../includes/fdf.h"

void		z_up(t_map *sizes)
{
	mlx_clear_window(sizes->mlx, sizes->win);
	sizes->size_z += 2;
	draw(sizes);
}

void		z_down(t_map *sizes)
{
	mlx_clear_window(sizes->mlx, sizes->win);
	sizes->size_z -= 2;
	draw(sizes);
}

void		size_up(t_map *sizes)
{
	mlx_clear_window(sizes->mlx, sizes->win);
	if (sizes->mod < 6)
		sizes->mod += 1;
	else
		sizes->mod += 2;
	draw(sizes);
}

void		size_down(t_map *sizes)
{
	mlx_clear_window(sizes->mlx, sizes->win);
	if (sizes->mod < 6 && sizes->mod > 0)
		sizes->mod -= 1;
	if (sizes->mod == 0)
		sizes->mod += 0;
	else
		sizes->mod -= 2;
	draw(sizes);
}

void		color_change(t_map *sizes)
{
	mlx_clear_window(sizes->mlx, sizes->win);
	sizes->color += 6;
	draw(sizes);
}
