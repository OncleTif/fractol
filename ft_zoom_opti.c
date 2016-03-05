/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zoom_opti.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 14:32:53 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/05 19:55:57 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_zoom_opti(t_graph *grp)
{
	double	zoom_x;
	double	zoom_y;

	zoom_x = grp->width / (grp->r_max - grp->r_min);
	zoom_y = grp->height / (grp->i_max - grp->i_min);
	grp->zoom_opti = zoom_x < zoom_y ? zoom_x : zoom_y;
	grp->zoom_step = grp->zoom_opti / 9;
	if (grp->zoom_opti < 1.0)
		grp->zoom_opti = 1.0;
	if (!grp->zoom_step)
		grp->zoom_step = 1;
	grp->zoom = grp->zoom_opti;
}
