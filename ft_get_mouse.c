/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_mouse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 17:05:38 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/24 16:14:28 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	ft_get_mouse(int btn, int x, int y, void *obj)
{
	t_graph		*grp;

	grp = (t_graph*)obj;
	grp->x_offset = x;
	grp->y_offset = y;
	ft_putnbr(btn);
	//if (btn == 4)
	if (btn == 1)
	ft_zoom_in(grp);
	//else if (btn == 5)
	else if (btn == 2)
	ft_zoom_out(grp);

	ft_putstr("mouse :");
	ft_putnbr(x);
	ft_putstr(",");
	ft_putnbrendl(y);
	return (btn);
}
