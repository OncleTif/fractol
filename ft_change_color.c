/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_color.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/06 20:45:25 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/06 20:51:13 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_change_color(t_graph *grp)
{
	if (grp->f_color == &ft_color)
		grp->f_color = &ft_color_step;
	else
		grp->f_color = &ft_color;
	ft_draw_frac(grp);
}
