/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_frac.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 14:42:55 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/05 18:57:29 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_draw_frac(t_graph *grp)
{
	int	y;
	int	x;

	mlx_clear_window(grp->mlx, grp->win);
	ft_putnbrendl(grp->zoom);
	y = 0;
	while (y < grp->height)
	{
		x = 0;
		while (x < grp->width)
		{
			grp->f(grp, x, y);
			x++;
		}
		y++;
	}
	ft_print_origin(grp);
	ft_putstr("origine fct (x1000):");
	ft_putnbr(grp->r_orig * 1000);
	ft_putstr(",");
	ft_putnbrendl(grp->i_orig * 1000);
	ft_putstr("mouse :");
	ft_putnbr(grp->x_orig);
	ft_putstr(",");
	ft_putnbrendl(grp->y_orig);
	ft_putnbrendl(grp->iter);
}
