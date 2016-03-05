/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mendel_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 15:07:51 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/05 15:58:32 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_mendel_init(t_graph *grp)
{
	grp->f = &ft_pixel_mendel;
	grp->width = WIDTH;
	grp->height = HEIGHT;
	grp->x_orig = grp->width / 2;
	grp->y_orig = grp->height / 2;
	grp->iter = 50;
	grp->color_min.color = 0x003333FF;
	grp->color_max.color = 0x00FF3333;
	ft_zoom_opti(grp);
	ft_coordinate(grp, grp->x_orig, grp->y_orig);
	grp->r_orig = grp->c_r;
	grp->i_orig = grp->c_i;
	grp->keymap = ft_key_mapping();
}
