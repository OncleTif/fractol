/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_key.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 16:17:53 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/06 20:45:18 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_get_key(int key, void *obj)
{
	t_graph		*grp;
	t_keymap	*keymap;

	grp = (t_graph*)obj;
	keymap = grp->keymap;
	if (key == 53)
	{
		mlx_destroy_window(grp->mlx, grp->win);
		exit(0);
	}
	while (keymap && keymap->key != key)
		keymap = keymap->next;
	if (keymap)
		keymap->f(grp);
	else
		ft_print_key(key);
	return (0);
}
