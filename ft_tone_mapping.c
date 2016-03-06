/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tone_mapping.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/06 19:27:35 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/06 20:19:11 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_tone_mapping(t_graph *grp)
{
	grp->tone = ft_tonenew(0x0000FF00, grp->tone);
	grp->tone = ft_tonenew(0x000BAA55, grp->tone);
	grp->tone = ft_tonenew(0x001755AA, grp->tone);
	grp->tone = ft_tonenew(0x002200FF, grp->tone);
	grp->tone = ft_tonenew(0x00770080, grp->tone);
	grp->tone = ft_tonenew(0x00CC0000, grp->tone);
	grp->tone = ft_tonenew(0x00000000, grp->tone);
	grp->tone_step = 20;
}
