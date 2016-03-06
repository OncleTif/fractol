/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_motion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/06 17:12:46 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/06 18:27:01 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_get_motion(int x, int y, void *obj)
{
	t_graph	*grp;

	grp = (t_graph*)obj;
	if (grp->f_motion)
		grp->f_motion(grp, x, y);
	return (0);
}
