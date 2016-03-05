/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_mapping_mendel.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 20:21:41 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/05 20:22:25 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_keymap	*ft_key_mapping_mendel(t_keymap *elem)
{
	elem = ft_keymapnew(69, elem, &ft_zoom_in);
	elem = ft_keymapnew(78, elem, &ft_zoom_out);
	elem = ft_keymapnew(67, elem, &ft_zoom_step_increase);
	elem = ft_keymapnew(75, elem, &ft_zoom_step_decrease);
	elem = ft_keymapnew(87, elem, &ft_origin_mendel);
	return (elem);
}
