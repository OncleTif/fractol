/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pixel_mendel.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/24 17:04:01 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/25 19:35:17 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_pixel_mendel(t_graph *grp, int x, int y)
{
	double	c_r;
	double	c_i;
	double	z_r;
	double	z_i;
	double	tmp;
	int		i;

	z_r = 0;
	z_i = 0;
	i = 0;
	c_r = (x + grp->x_mid - grp->x_offset) / grp->zoom - 2.1 * grp->zoom / grp->zoom_opti;
	c_i = (y + grp->y_mid - grp->y_offset) / grp->zoom - 1.2 * grp->zoom / grp->zoom_opti;
	while ((z_r * z_r + z_i * z_i < 4) && i < grp->iter)
	{
		tmp = z_r;
		z_r = z_r * z_r - z_i * z_i + c_r;
		z_i = 2 * z_i * tmp + c_i;
		i++;
	}
		mlx_pixel_put(grp->mlx, grp->win, x, y, ft_color(i, grp));
}
