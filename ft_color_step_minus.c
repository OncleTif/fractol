/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_step_minus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/06 20:36:45 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/06 20:37:14 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_color_step_minus(t_graph *grp)
{
	if (grp->tone_step > 1)
	{
		grp->tone_step--;
		ft_draw_frac(grp);
	}
}
