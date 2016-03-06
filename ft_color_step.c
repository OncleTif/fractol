/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_step.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/06 19:45:44 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/06 20:22:27 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_color_step(int iter, t_graph *grp)
{
	int		i;
	t_tone	*tone;

	i = 0;
	tone = grp->tone;
	while (i < iter - grp->tone_step)
	{
		i = i + grp->tone_step;
		if (tone->next)
			tone = tone->next;
		else
			tone = grp->tone;
	}
	return (tone->color.color);
}
