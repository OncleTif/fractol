/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pixel_mendel.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/24 17:04:01 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/05 20:32:14 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_pixel_mendel(t_graph *grp, int x, int y)
{
	double	z_r;
	double	z_i;
	double	tmp;
	int		i;

	z_r = 0;
	z_i = 0;
	i = 0;
	ft_coordinate(grp, x, y);
	while ((z_r * z_r + z_i * z_i < 4) && i < grp->iter)
	{
		tmp = z_r;
		z_r = z_r * z_r - z_i * z_i + grp->c_r;
		z_i = 2 * z_i * tmp + grp->c_i;
		i++;
	}
	mlx_pixel_put(grp->mlx, grp->win, x, y, ft_color(i, grp));
}
