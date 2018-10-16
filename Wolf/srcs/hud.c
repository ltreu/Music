/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hud.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 18:18:00 by ltreu             #+#    #+#             */
/*   Updated: 2018/09/20 18:18:04 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	help_text(t_wolf3d *t)
{
	mlx_string_put(t->mlx, t->win, 10, 10,
			0xEEEEEE, "Press W A S D or the arrow keys to move.");
	mlx_string_put(t->mlx, t->win, 10, 30, 0xEEEEEE, "Press SHIFT to sprint.");
	mlx_string_put(t->mlx, t->win, 10, 50,
			0xEEEEEE, "Press DEL to reset the level.");
	mlx_string_put(t->mlx, t->win, 10, 70,
			0xEEEEEE, "Press T to show or hide textures.");
	mlx_string_put(t->mlx, t->win, 10, 90,
			0xEEEEEE, "Press H to show or hide this help.");
	mlx_string_put(t->mlx, t->win, 10, 110,
			0xEEEEEE, "Press ESC to quit.");
}
