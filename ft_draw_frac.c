/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_frac.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 14:42:55 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/23 14:19:50 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_draw_frac(t_graph *grp)
{
	int	y;
	int	x;

	mlx_clear_window(grp->mlx, grp->win);
	y = 0;
	while (y < grp->height)
	{
		x = 0;
		while (x < grp->width)
		{
			ft_pixel_frac(grp, x, y);
			x++;
		}
		y++;
	}

}
