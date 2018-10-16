/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 12:01:07 by ltreu             #+#    #+#             */
/*   Updated: 2018/09/05 12:13:49 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if(nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}

int ft_atoi(char *str)
{
	int i;
	int nbr;

	i = 0;
	nbr = 0;
	while(str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	return(nbr);
}

int main(int ac, char **av)
{
	int i;
	int nbr;

	i = 1;
	if(ac == 2)
	{
		nbr = ft_atoi(av[1]);
		while(i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(nbr * i);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return(0);
}
