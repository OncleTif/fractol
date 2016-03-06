/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_mapping.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 20:26:28 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/06 20:53:12 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_keymap	*ft_key_mapping(void)
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
	elem = ft_keymapnew(11, elem, &ft_origin_bunny);
	elem = ft_keymapnew(1, elem, &ft_blocker);
	elem = ft_keymapnew(8, elem, &ft_change_color);
	elem = ft_keymapnew(116, elem, &ft_color_step_plus);
	elem = ft_keymapnew(121, elem, &ft_color_step_minus);
	return (elem);
}
