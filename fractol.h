/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 18:50:07 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/25 18:50:30 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# include <mlx.h>
# include <fcntl.h>
# include <math.h>
# include "libft/libft.h"
# define HEIGHT 500
# define WIDTH 500
# define BUTTON_NOTIFY 4
# define MOTION_NOTIFY 6
# define POINTER_MOTION_MASK (1L<<6)
# define BUTTON1_MOTION_MASK (1L<<8)

typedef struct		s_graph
{
	int				width;
	double			zoom;
	double			zoom_x;
	double			zoom_y;
	double			zoom_opti;
	int				zoom_step;
	int				height;
	int				x_offset;
	int				y_offset;
	struct s_keymap	*keymap;
	void			*mlx;
	void			*win;
	int				x_max;
	int				y_max;
	int				x_mid;
	int				y_mid;
	int				z_min;
	int				z_max;
	void			(*f)(struct s_graph*, int, int);
}					t_graph;

typedef	struct		s_keymap
{
	int				key;
	void			(*f)(t_graph*);
	struct s_keymap	*next;
}					t_keymap;

t_keymap			*ft_keymapnew(int key, t_keymap *nxt, void (*f)(t_graph*));
t_keymap			*ft_key_mapping(void);
t_graph				*make_window(char *str);
void				ft_zoom_in(t_graph *graph);
void				ft_zoom_out(t_graph *graph);
void				ft_zoom_opti(t_graph *graph);
void				ft_move_dwn(t_graph *graph);
void				ft_move_lft(t_graph *graph);
void				ft_move_rgt(t_graph *graph);
void				ft_move_up(t_graph *graph);
void				ft_origin(t_graph *graph);
void				ft_print_key(int key);
void				ft_text(t_graph *grp);
int					ft_get_key(int key, void *obj);
int					ft_expose(void *obj);
int					ft_limiter(int x, int y, t_graph *grp);
void				ft_draw_frac(t_graph *grp);
void				ft_pixel_mendel(t_graph *grp, int x, int y);
int					ft_get_mouse(int btn, int x, int y, void *obj);
void				ft_print_origin(t_graph *grp);
#endif
