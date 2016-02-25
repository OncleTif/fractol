/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 19:08:08 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/25 19:38:18 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_color(int iter, t_graph *grp)
{
	t_color	color;
	int	i;

	i = 0;
	while (i < 4)
	{
		color.rgb[i] = (grp->color_max.rgb[i] * iter / grp->iter
			+ grp->color_min.rgb[i] * (grp->iter - iter) / grp->iter);
		i++;
	}
	return (color.color);
}
