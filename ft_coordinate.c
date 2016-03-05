/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coordinate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 15:26:27 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/05 15:35:51 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_coordinate(t_graph *grp, int x, int y)
{
	grp->c_r = (x + grp->x_orig) / grp->zoom - 2.1 * grp->zoom / grp->zoom_opti + grp->r_orig;
	grp->c_i = (y + grp->y_orig) / grp->zoom - 1.2 * grp->zoom / grp->zoom_opti + grp->i_orig;
}
