/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_origin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 17:51:26 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/05 18:57:49 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_print_origin(t_graph *grp)
{
	mlx_pixel_put(grp->mlx, grp->win, grp->x_orig - 1,
			grp->y_orig, 0x0000FF00);
	mlx_pixel_put(grp->mlx, grp->win, grp->x_orig,
			grp->y_orig - 1, 0x0000FF00);
	mlx_pixel_put(grp->mlx, grp->win, grp->x_orig,
			grp->y_orig, 0x0000FF00);
	mlx_pixel_put(grp->mlx, grp->win, grp->x_orig + 1,
			grp->y_orig, 0x0000FF00);
	mlx_pixel_put(grp->mlx, grp->win, grp->x_orig,
			grp->y_orig + 1, 0x0000FF00);
}
