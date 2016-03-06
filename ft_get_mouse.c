/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_mouse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 17:05:38 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/06 18:53:36 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_get_mouse(int btn, int x, int y, void *obj)
{
	t_graph		*grp;

	grp = (t_graph*)obj;
	ft_coordinate(grp, x, y);
	grp->x_orig = x;
	grp->y_orig = y;
	grp->r_orig = grp->c_r;
	grp->i_orig = grp->c_i;
	if (btn == 1 || btn == 4 || btn == 6)
		ft_zoom_in(grp);
	else if (btn == 2 || btn == 5 || btn == 7)
		ft_zoom_out(grp);
	else
		ft_draw_frac(grp);
	return (btn);
}
