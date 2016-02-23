/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_origin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 17:36:31 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/23 14:23:27 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_origin(t_graph *grp)
{
	grp->x_offset = grp->width / 2;
	grp->y_offset = grp->height / 2;
	grp->zoom = grp->zoom_opti;
	grp->f(grp);
}
