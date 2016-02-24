/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_frac.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 14:42:55 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/24 11:42:44 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_draw_frac(t_graph *grp)
{
	int	y;
	int	x;

	mlx_clear_window(grp->mlx, grp->win);
	ft_putnbrendl(grp->zoom);
	ft_putnbrendl(grp->x_offset);
	ft_putnbrendl(grp->y_offset);
	y = 0;
	while (y < grp->height)
	{
		x = 0;
		while (x < grp->width)
		{
			ft_pixel_frac(grp, x + grp->x_mid - grp->x_offset,
					y + grp->y_mid - grp->y_offset);
			x++;
		}
		y++;
	}

}
