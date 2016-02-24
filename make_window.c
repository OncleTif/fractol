/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 13:15:12 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/24 17:32:41 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_graph	*make_window(char *str)
{
	t_graph	*grp;

	if (!(grp = (t_graph*)ft_memalloc(sizeof(t_graph))))
		ft_error("grp allocation failed");
//	ft_map_builder(list, grp);
	grp->f = &ft_pixel_mendel;
	grp->width = WIDTH;
	grp->height = HEIGHT;
	grp->x_mid = grp->width / 2;
	grp->y_mid = grp->height / 2;
	grp->x_offset = grp->x_mid;
	grp->y_offset = grp->y_mid;
	ft_zoom_opti(grp);
	grp->keymap = ft_key_mapping();
	grp->mlx = mlx_init();
	grp->win = mlx_new_window(grp->mlx, grp->width, grp->height, str);
	mlx_key_hook(grp->win, &ft_get_key, grp);
	mlx_hook(grp->win, BUTTON_NOTIFY, BUTTON1_MOTION_MASK, &ft_get_mouse, grp);
	mlx_expose_hook(grp->win, &ft_expose, grp);
	return (grp);
}
