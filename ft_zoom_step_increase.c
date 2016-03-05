/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zoom_step_increase.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 17:58:22 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/05 18:03:51 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_zoom_step_increase(t_graph *grp)
{
	if (grp->zoom_step < INT_MAX / 2)
		grp->zoom_step = grp->zoom_step * 2;
}
