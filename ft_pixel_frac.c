/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pixel_frac.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 16:17:07 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/23 11:41:24 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_pixel_frac(t_graph *grp, int x, int y)
{
	int	color;

color = 0x00FF0000;



	mlx_pixel_put(grp->mlx, grp->win, x, y, color);
}
