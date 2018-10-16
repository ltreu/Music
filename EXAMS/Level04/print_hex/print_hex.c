/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 06:05:04 by ltreu             #+#    #+#             */
/*   Updated: 2018/09/06 06:05:12 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    print_hex(unsigned int n)
{
    if (n >= 16)
        print_hex(n / 16);
    if (n % 16 < 10)
        ft_putchar((n % 16) + 48);
    else
        ft_putchar((n % 16) - 10 + 97);
}

int     ft_atoi_print_hex(char *str)
{
    int     i;
    int     result;

    i = 0;
    while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
        str++;
    if (str[i] == '-')
        return (-1);
    if (str[i] == '+')
        i++;
    result = 0;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (-1);
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    return (result);
}

int     main(int argc, char **argv)
{
    int     nb;

    if (argc == 2)
    {
        if ((nb = ft_atoi_print_hex(argv[1])) != -1)
            print_hex(nb);
    }
    write(1, "\n", 1);
    return (0);
}

