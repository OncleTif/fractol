/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pixel_frac.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 16:17:07 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/23 13:34:50 by tmanet           ###   ########.fr       */
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
	c_r = x / grp->zoom_x - 2.1;
	c_i = y / grp->zoom_y - 1.2;
	color = 0x00FF0000;
	while ((z_r * z_r + z_i * z_i < 4) && i < 50)
	{
		tmp = z_r;
		z_r = z_r * z_r - z_i * z_i + c_r;
		z_i = 2 * z_i * tmp + c_i;
		i++;
	}
	if (i == 50)
		mlx_pixel_put(grp->mlx, grp->win, x, y, color);
}
