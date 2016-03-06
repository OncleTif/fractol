/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tonenew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/06 19:32:33 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/06 19:37:28 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_tone	*ft_tonenew(int color, t_tone *nxt)
{
	t_tone	*ret;

	if (!(ret = (t_tone*)ft_memalloc(sizeof(t_tone))))
		ft_error("tone allocation error");
	ret->color.color = color;
	ret->next = nxt;
	return (ret);
}
