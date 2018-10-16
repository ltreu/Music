

#include "../includes/fdf.h"

int			my_key(int keycode, t_map *sizes)
{
	if (keycode == 126)
		z_up(sizes);
	if (keycode == 125)
		z_down(sizes);
	if (keycode == 69)
		size_up(sizes);
	if (keycode == 78)
		size_down(sizes);
	if (keycode == 91)
		map_up(sizes);
	if (keycode == 86)
		map_left(sizes);
	if (keycode == 88)
		map_right(sizes);
	if (keycode == 84)
		map_down(sizes);
	if (keycode == 82)
		color_change(sizes);
	if (keycode == 49)
		map_project(sizes);
	if (keycode == 53)
		exit(0);
	return (0);
}

int			down_ald(int keycode)
{
	if (keycode == 2)
		exit(0);
	return (0);
}

int			ft_error(int argc, char const **argv)
{
	if (argc > 2)
	{
		ft_putendl("Warning: Too many files!");
		return (1);
	}
	else if (argc < 2)
	{
		ft_putendl("Warning: No file! Please use an .fdf file to run");
		return (1);
	}
	else if (argv[1][ft_strlen(argv[1]) - 4] != '.' ||
		argv[1][ft_strlen(argv[1]) - 3] != 'f' ||
		argv[1][ft_strlen(argv[1]) - 2] != 'd' ||
		argv[1][ft_strlen(argv[1]) - 1] != 'f')
	{
		ft_putstr("Warning: Unsupported file! Please use an .fdf file to run");
		ft_putchar('\n');
		return (1);
	}
	return (0);
}

int			main(int argc, char const **argv)
{
	t_map	sizes;

	map_init(&sizes);
	if (ft_error(argc, argv) == 1)
		return (1);
	sizes.fd = open(argv[1], O_RDONLY);
	sizes.raw_map = get_file_content(sizes);
	get_map_size(&sizes);
	create_map(&sizes, 0);
	draw(&sizes);
	ft_putstr("succes");
	ft_putstr("\n");
	mlx_menu(&sizes);
	mlx_hook(sizes.win, 2, 64, my_key, &sizes);
	mlx_mouse_hook(sizes.win, down_ald, 0);
	mlx_loop(sizes.mlx);
	return (0);
}
