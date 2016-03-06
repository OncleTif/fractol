/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_step_plus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/06 20:32:29 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/06 20:35:11 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_color_step_plus(t_graph *grp)
{
	if (grp->tone_step < grp->iter - 1)
	{
		grp->tone_step++;
		ft_draw_frac(grp);
	}
}
