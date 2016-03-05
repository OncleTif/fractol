/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zoom_step_decrease.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 18:01:32 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/05 18:03:01 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_zoom_step_decrease(t_graph *grp)
{
	if (grp->zoom_step / 2)
		grp->zoom_step = grp->zoom_step / 2;
}
