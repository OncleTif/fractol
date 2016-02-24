/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pixel_frac.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 16:17:07 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/24 11:47:14 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_pixel_frac(t_graph *grp, int x, int y)
{
	int		color;
	double	c_r;
	double	c_i;
	double	z_r;
	double	z_i;
	double	tmp;
	int		i;

	z_r = 0;
	z_i = 0;
	i = 0;
	c_r = (x) / grp->zoom - 2.1;
	c_i = (y) / grp->zoom - 1.2;
	color = 0x00FF0000;
	while ((z_r * z_r + z_i * z_i < 4) && i < grp->zoom)
	{
		tmp = z_r;
		z_r = z_r * z_r - z_i * z_i + c_r;
		z_i = 2 * z_i * tmp + c_i;
		i++;
	}
	if (i >= grp->zoom)
		mlx_pixel_put(grp->mlx, grp->win, x + grp->x_offset - grp->x_mid,
				y + grp->y_offset - grp->y_mid, color);
}
