/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 13:15:12 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/06 19:10:44 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_graph	*make_window(char *str)
{
	t_graph	*grp;

	if (!(grp = (t_graph*)ft_memalloc(sizeof(t_graph))))
		ft_error("grp allocation failed");
	if (ft_strequ(str, "mandel"))
		ft_mendel_init(grp);
	else if (ft_strequ(str, "julia"))
		ft_julia_init(grp);
	else if (ft_strequ(str, "bunny"))
		ft_bunny_init(grp);
	else
		ft_error("You must define an argment in :\nmandel, julia, bunny");
	grp->keymap = ft_key_mapping();
	grp->mlx = mlx_init();
	grp->win = mlx_new_window(grp->mlx, grp->width, grp->height, str);
	mlx_key_hook(grp->win, &ft_get_key, grp);
	mlx_hook(grp->win, BUTTON_NOTIFY, BUTTON1_MOTION_MASK, &ft_get_mouse, grp);
	mlx_hook(grp->win, MOTION_NOTIFY, POINTER_MOTION_MASK, &ft_get_motion, grp);
	mlx_expose_hook(grp->win, &ft_expose, grp);
	return (grp);
}
