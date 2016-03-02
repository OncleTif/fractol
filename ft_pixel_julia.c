/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pixel_julia.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/02 11:43:18 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/02 12:12:18 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_pixel_julia(t_graph *grp, int x, int y)
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
	c_r = 0.285;
	c_i = 0.01;
	while ((z_r * z_r + z_i * z_i < 4) && i < grp->iter)
	{
		tmp = z_r;
		z_r = z_r * z_r - z_i * z_i + c_r;
		z_i = 2 * z_i * tmp + c_i;
		i++;
	}
	if (i >= grp->iter)
		mlx_pixel_put(grp->mlx, grp->win, x, y, ft_color(i, grp));
}
