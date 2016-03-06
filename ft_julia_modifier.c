/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_julia_modifier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/06 17:35:40 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/06 18:55:40 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_julia_modifier(t_graph *grp, int x, int y)
{
	if (x > 0 && x < grp->width && y > 0 && y < grp->height)
	{
		grp->julia_r = (double)((double)(x * 2) / grp->width) - 1;
		grp->julia_i = (double)((double)(y * 2) / grp->height) - 1;
		ft_draw_frac(grp);
	}
}
