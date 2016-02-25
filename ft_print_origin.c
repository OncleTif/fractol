/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_origin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 17:51:26 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/25 17:56:53 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_print_origin(t_graph *grp)
{
		mlx_pixel_put(grp->mlx, grp->win, grp->x_offset - 1,
				grp->y_offset, 0x0000FF00);
		mlx_pixel_put(grp->mlx, grp->win, grp->x_offset,
				grp->y_offset - 1, 0x0000FF00);
		mlx_pixel_put(grp->mlx, grp->win, grp->x_offset,
				grp->y_offset, 0x0000FF00);
		mlx_pixel_put(grp->mlx, grp->win, grp->x_offset + 1,
				grp->y_offset, 0x0000FF00);
		mlx_pixel_put(grp->mlx, grp->win, grp->x_offset,
				grp->y_offset + 1, 0x0000FF00);
}
