/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_frac.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 14:42:55 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/06 18:08:00 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

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
			grp->f(grp, x, y);
			x++;
		}
		y++;
	}
}
