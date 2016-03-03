/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_origin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 17:36:31 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/03 12:11:56 by tmanet           ###   ########.fr       */
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
	grp->x_off_fct = 0;
	grp->y_off_fct = 0;
	ft_draw_frac(grp);
}
