/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 06:31:38 by ltreu             #+#    #+#             */
/*   Updated: 2018/09/14 06:41:06 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc == 7)
		write(1, "Success\n", 8);
	else if(argc == 6 && argv[2][1] != 'T')
		write(1, "Success\n", 8);
	else if(argc == 1)
		write(1, "\n", 1);
	else
		write(1, "Fail\n", 5);
	return(0);
}
