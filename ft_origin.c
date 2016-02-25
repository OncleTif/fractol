/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_origin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 17:36:31 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/24 17:02:42 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_origin(t_graph *grp)
{
	grp->x_offset = grp->width / 2;
	grp->y_offset = grp->height / 2;
	grp->x_mid = grp->x_offset;
	grp->y_mid = grp->y_offset;
	grp->zoom = grp->zoom_opti;
	ft_draw_frac(grp);
}
