/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_julia_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 19:26:27 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/06 18:56:18 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_julia_init(t_graph *grp)
{
	grp->f = &ft_pixel_julia;
	grp->f_origin = &ft_julia_init;
	grp->f_motion = &ft_julia_modifier;
	grp->width = WIDTH;
	grp->height = HEIGHT;
	grp->x_orig = grp->width / 2;
	grp->y_orig = grp->height / 2;
	grp->r_min = -1;
	grp->r_max = 1;
	grp->i_min = -1.2;
	grp->i_max = 1.2;
	grp->iter_init = 150;
	grp->iter = 150;
	grp->color_min.color = 0x00000000;
	grp->color_max.color = 0x00FF3333;
	grp->julia_r = 0.285;
	grp->julia_i = 0.01;
	ft_zoom_opti(grp);
	grp->r_orig = 0;
	grp->i_orig = 0;
}
