/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zoom_out.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 18:22:54 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/05 18:45:50 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_zoom_out(t_graph *grp)
{
	if (grp->zoom - grp->zoom_step > 0)
	{
		grp->zoom = grp->zoom - grp->zoom_step;
		if (grp->zoom > grp->zoom_opti)
			grp->iter = grp->zoom / 3 < grp->zoom_opti ?
				grp->iter_init * grp->zoom / grp->zoom_opti :
				3 * grp->iter_init;
		else
			grp->iter = grp->iter_init;
		ft_draw_frac(grp);
	}
}
