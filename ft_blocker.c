/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_blocker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/06 19:01:13 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/06 19:03:52 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_blocker(t_graph *grp)
{
	if (grp->f_motion)
		grp->f_motion = NULL;
	else if (grp->f_origin == &ft_julia_init)
		grp->f_motion = &ft_julia_modifier;
}
