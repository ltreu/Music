/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cycle_detector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltreu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 06:41:39 by ltreu             #+#    #+#             */
/*   Updated: 2018/09/14 06:46:39 by ltreu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int cycle_detector(const t_list *list)
{
	t_list *l1 = (t_list *) list;
	t_list *l2 = (t_list *) list;
	while(l2 && l2->next)
	{
		l1 = l1->next;
		l2 = l2->next->next;
		if(l1 == l2)
			return(1);
	}
	return(0);
}
