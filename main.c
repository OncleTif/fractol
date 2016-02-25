/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 11:57:48 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/23 14:17:54 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	main(int argc, char **argv)
{
	t_graph	*grp;
	int		i;

	i = 1;
	grp = NULL;
	if (argc > 1 && argv)
	{
		while (i < argc)
		{
			grp = make_window(argv[i]);
			i++;
		}
		mlx_loop(grp->mlx);
	}
	else
	{
		ft_putendl("You must define an argment in :\nmandel,");
	}
	return (0);
}
