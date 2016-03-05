/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_mapping_julia.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 20:18:15 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/05 20:20:48 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_keymap	*ft_key_mapping_julia(t_keymap *elem)
{
	elem = ft_keymapnew(69, elem, &ft_zoom_in);
	elem = ft_keymapnew(78, elem, &ft_zoom_out);
	elem = ft_keymapnew(67, elem, &ft_zoom_step_increase);
	elem = ft_keymapnew(75, elem, &ft_zoom_step_decrease);
	elem = ft_keymapnew(87, elem, &ft_origin_julia);
	return (elem);
}
