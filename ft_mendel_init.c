/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mendel_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 15:07:51 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/06 19:59:17 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_mendel_init(t_graph *grp)
{
	grp->f = &ft_pixel_mendel;
	grp->f_origin = &ft_mendel_init;
	grp->width = WIDTH;
	grp->height = HEIGHT;
	grp->x_orig = grp->width / 2;
	grp->y_orig = grp->height / 2;
	grp->r_min = -2.1;
	grp->r_max = 0.6;
	grp->i_min = -1.2;
	grp->i_max = 1.2;
	grp->iter_init = 50;
	grp->iter = 50;
	grp->color_min.color = 0x003333FF;
	grp->color_max.color = 0x00FF3333;
	ft_zoom_opti(grp);
	grp->r_orig = -0.75;
	grp->i_orig = 0;
}
