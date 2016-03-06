/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_mapping.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 20:26:28 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/06 16:32:00 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_keymap	*ft_key_mapping(int type)
{
	t_keymap	*elem;

	elem = NULL;
	elem = ft_keymapnew(3, elem, &ft_draw_frac);
	elem = ft_keymapnew(69, elem, &ft_zoom_in);
	elem = ft_keymapnew(78, elem, &ft_zoom_out);
	elem = ft_keymapnew(67, elem, &ft_zoom_step_increase);
	elem = ft_keymapnew(75, elem, &ft_zoom_step_decrease);
	elem = ft_keymapnew(87, elem, &ft_origin);
	elem = ft_keymapnew(123, elem, &ft_move_lft);
	elem = ft_keymapnew(124, elem, &ft_move_rgt);
	elem = ft_keymapnew(125, elem, &ft_move_dwn);
	elem = ft_keymapnew(126, elem, &ft_move_up);
	elem = ft_keymapnew(46, elem, &ft_origin_mendel);
	elem = ft_keymapnew(38, elem, &ft_origin_julia);
	if (type == JULIA)
		elem = ft_key_mapping_julia(elem);
	else if (type == MENDEL)
		elem = ft_key_mapping_mendel(elem);
	return (elem);
}
