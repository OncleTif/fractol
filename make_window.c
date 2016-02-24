/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 13:15:12 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/24 11:45:46 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_graph	*make_window(char *str)
{
	t_graph	*graph;

	if (!(graph = (t_graph*)ft_memalloc(sizeof(t_graph))) && str)
		ft_error("graph allocation failed");
//	ft_map_builder(list, graph);
	graph->f = &ft_draw_frac;
	graph->width = WIDTH;
	graph->height = HEIGHT;
	graph->x_mid = graph->width / 2;
	graph->y_mid = graph->height / 2;
	graph->x_offset = graph->x_mid;
	graph->y_offset = graph->y_mid;
	ft_zoom_opti(graph);
	graph->keymap = ft_key_mapping();
	graph->mlx = mlx_init();
	graph->win = mlx_new_window(graph->mlx, graph->width, graph->height, "FDF");
	mlx_key_hook(graph->win, &ft_get_key, graph);
	mlx_expose_hook(graph->win, &ft_expose, graph);
	return (graph);
}
