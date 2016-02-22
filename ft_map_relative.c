/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_relative.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 15:31:39 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/11 14:13:06 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_map_relative(t_graph *grp)
{
	t_node	*node;
	t_node	*line;

	line = grp->node;
	while (line)
	{
		node = line;
		while (node)
		{
			node->x = node->x - grp->x_mid;
			node->y = grp->y_max - node->y - grp->y_mid;
			node = node->rgt;
		}
		line = line->dwn;
	}
}
