#include "../includes/fdf.h"

void		point_init(t_point *points)
{
	points->x0 = 0;
	points->y0 = 0;
	points->x1 = 0;
	points->y1 = 0;
	points->z = 0;
}

void		draw_init(t_draw *drawing)
{
	drawing->dx = 0;
	drawing->dy = 0;
	drawing->err = 0;
	drawing->e2 = 0;
	drawing->sx = 0;
	drawing->sy = 0;
}

void		mlx_menu(t_map *sizes)
{
	mlx_string_put(sizes->mlx, sizes->win, 800, 0, GREEN,
		"2, 4, 6, 8 : change the position.");
	mlx_string_put(sizes->mlx, sizes->win, 800, 20, CYAN,
		"up and down arrows : change the height");
	mlx_string_put(sizes->mlx, sizes->win, 800, 40, YELLOW,
		"+ and - : change the zoom");
	mlx_string_put(sizes->mlx, sizes->win, 800, 60, ORANGE,
		"space : change the type of projection");
	mlx_string_put(sizes->mlx, sizes->win, 800, 80, RED,
		"0 : change the colour");
	mlx_string_put(sizes->mlx, sizes->win, 800, 100, WHITE,
		"esc or right click : close the window");
}

void		map_init(t_map *sizes)
{
	sizes->size_y = 0;
	sizes->size_x = 0;
	sizes->size_z = 0;
	sizes->pos_x = 100;
	sizes->pos_y = 100;
	sizes->mlx = mlx_init();
	sizes->win = mlx_new_window(sizes->mlx, 1200, 1200, "mlx_42");
	sizes->fd = 0;
	sizes->map = 0;
	sizes->raw_map = NULL;
	sizes->len = 0;
	sizes->mod = 20;
	sizes->color = 0;
	sizes->proj = 0;
}