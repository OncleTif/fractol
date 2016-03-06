/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pixel_julia.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/02 11:43:18 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/06 18:54:46 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_pixel_julia(t_graph *grp, int x, int y)
{
	double	z_r;
	double	z_i;
	double	tmp;
	int		i;

	z_r = (x - grp->x_orig) / grp->zoom + grp->r_orig;
	z_i = (y - grp->y_orig) / grp->zoom + grp->i_orig;
	i = 0;
	while ((z_r * z_r + z_i * z_i < 4) && i < grp->iter)
	{
		tmp = z_r;
		z_r = z_r * z_r - z_i * z_i + grp->julia_r;
		z_i = 2 * z_i * tmp + grp->julia_i;
		i++;
	}
	mlx_pixel_put(grp->mlx, grp->win, x, y, ft_color(i, grp));
}
