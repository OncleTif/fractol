/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zoom_in.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 18:18:45 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/06 19:29:58 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_zoom_in(t_graph *grp)
{
	if (grp->zoom < INT_MAX - grp->zoom_step)
	{
		grp->zoom = grp->zoom + grp->zoom_step;
		if (grp->zoom > grp->zoom_opti)
			grp->iter = grp->zoom / 3 < grp->zoom_opti ?
				grp->iter_init * grp->zoom / grp->zoom_opti
				: 3 * grp->iter_init;
		else
			grp->iter = grp->iter_init;
		ft_draw_frac(grp);
	}
}
