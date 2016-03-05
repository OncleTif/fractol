/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_mouse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 17:05:38 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/05 15:57:14 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_get_mouse(int btn, int x, int y, void *obj)
{
	t_graph		*grp;

	grp = (t_graph*)obj;
	grp->x_orig = x;
	grp->y_orig = y;
	ft_coordinate(grp, x, y);
	grp->r_orig = grp->c_r;
	grp->i_orig = grp->c_i;
	ft_putstr("origine fct :");
	ft_putnbr(grp->r_orig * 1000);
	ft_putstr(",");
	ft_putnbrendl(grp->i_orig * 1000);
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
