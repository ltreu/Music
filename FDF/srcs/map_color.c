/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_color.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 15:16:54 by ltreu             #+#    #+#             */
/*   Updated: 2018/08/02 15:17:23 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int		therm_color(int color)
{
	if (color == 0)
		color = DARK_GREEN;
	else if (color == 1)
		color = GREEN;
	else if (color == 2)
		color = CYAN;
	else if (color == 3)
		color = YELLOW;
	else if (color == 4)
		color = ORANGE;
	else if (color == 5)
		color = RED;
	else
		color = WHITE;
	return (color);
}

int		blue_color(int color)
{
	if (color == 6)
		color = DARK_BLUE;
	else if (color == 7)
		color = MARINE_BLUE;
	else if (color == 8)
		color = BLUE;
	else if (color == 9)
		color = LIGHT_BLUE;
	else if (color == 10)
		color = AQUA_BLUE;
	else if (color == 11)
		color = CYAN;
	else
		color = WHITE;
	return (color);
}

int		nb_color(int color)
{
	if (color == 12)
		color = BLACK;
	else if (color == 13)
		color = GRAY;
	else if (color == 14)
		color = STEEL_GRAY;
	else if (color == 15)
		color = LIGHT_GRAY;
	else if (color == 16)
		color = WHITE_SMOKE;
	else if (color == 17)
		color = WHITE;
	else
		color = WHITE;
	return (color);
}

int		put_color(int color)
{
	if (color >= 0 && color < 6)
		color = therm_color(color);
	else if (color >= 6 && color < 12)
		color = blue_color(color);
	else if (color >= 12 && color < 18)
		color = nb_color(color);
	else if (color >= 18)
		color = put_color(color % 18);
	else
		color = WHITE;
	return (color);
}
