/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 11:57:48 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/23 12:07:53 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int argc, char **argv)
{
	t_list	*list;

	if (argc == 2 && argv)
	{
		list = ft_reader(argv[1]);
		make_window(list);
	}
	else
	{
		ft_putendl("You must define an argment in :");
		ft_putendl("mandel,");
	}
	return (0);
}
