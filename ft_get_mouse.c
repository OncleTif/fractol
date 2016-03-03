/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_mouse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 17:05:38 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/03 12:08:57 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_get_mouse(int btn, int x, int y, void *obj)
{
	t_graph		*grp;

	grp = (t_graph*)obj;
	grp->x_offset = x;
	grp->y_offset = y;
	grp->x_mid = x;
	grp->y_mid = y;
	grp->x_off_fct = (x + grp->x_mid - grp->x_offset) / grp->zoom - 2.1 * grp->zoom / grp->zoom_opti + grp->x_off_fct;
	grp->y_off_fct = (y + grp->y_mid - grp->y_offset) / grp->zoom - 1.2 * grp->zoom / grp->zoom_opti + grp->y_off_fct;
	ft_putnbr(btn);
	//if (btn == 4)
	if (btn == 1)
	//ft_zoom_in(grp);
	ft_draw_frac(grp);
	//else if (btn == 5)
	else if (btn == 2)
	ft_zoom_out(grp);

	ft_putstr("mouse :");
	ft_putnbr(x);
	ft_putstr(",");
	ft_putnbrendl(y);
	return (btn);
}
