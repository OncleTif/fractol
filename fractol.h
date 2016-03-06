/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 18:50:07 by tmanet            #+#    #+#             */
/*   Updated: 2016/03/06 20:37:59 by tmanet           ###   ########.fr       */
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
# define JULIA 1
# define MENDEL 0
# define BUTTON_NOTIFY 4
# define MOTION_NOTIFY 6
# define POINTERWINDOW 0L
# define POINTER_MOTION_MASK (1L<<6)
# define POINTER_MOTION_HINT_MASK (1L<<7)
# define BUTTON1_MOTION_MASK (1L<<8)

typedef union		u_color
{
	unsigned int	color;
	unsigned char	rgb[4];
}					t_color;

typedef struct		s_tone
{
	t_color			color;
	struct s_tone	*next;
}					t_tone;

typedef struct		s_graph
{
	double			zoom;
	double			r_orig;
	double			r_min;
	double			r_max;
	double			i_min;
	double			i_max;
	double			i_orig;
	double			c_r;
	double			c_i;
	double			julia_r;
	double			julia_i;
	double			zoom_opti;
	int				zoom_step;
	int				width;
	int				height;
	int				x_orig;
	int				y_orig;
	struct s_keymap	*keymap;
	t_tone			*tone;
	int				tone_step;
	void			*mlx;
	void			*win;
	int				x_max;
	int				y_max;
	int				x_mid;
	int				y_mid;
	int				z_min;
	int				z_max;
	int				iter;
	int				iter_init;
	t_color			color_min;
	t_color			color_max;
	void			(*f)(struct s_graph*, int, int);
	int				(*f_color)(int, struct s_graph*);
	void			(*f_origin)(struct s_graph*);
	void			(*f_motion)(struct s_graph*, int, int);
}					t_graph;

typedef	struct		s_keymap
{
	int				key;
	void			(*f)(t_graph*);
	struct s_keymap	*next;
}					t_keymap;

t_keymap			*ft_keymapnew(int key, t_keymap *nxt, void (*f)(t_graph*));
t_keymap			*ft_key_mapping(void);
t_keymap			*ft_key_mapping_julia(t_keymap *km);
t_keymap			*ft_key_mapping_mendel(t_keymap *km);
t_graph				*make_window(char *str);
void				ft_zoom_in(t_graph *graph);
void				ft_zoom_out(t_graph *graph);
void				ft_zoom_opti(t_graph *graph);
void				ft_move_dwn(t_graph *graph);
void				ft_move_lft(t_graph *graph);
void				ft_move_rgt(t_graph *graph);
void				ft_move_up(t_graph *graph);
void				ft_origin(t_graph *graph);
void				ft_origin_mendel(t_graph *graph);
void				ft_origin_julia(t_graph *graph);
void				ft_origin_bunny(t_graph *graph);
void				ft_print_key(int key);
void				ft_text(t_graph *grp);
int					ft_get_key(int key, void *obj);
int					ft_expose(void *obj);
int					ft_limiter(int x, int y, t_graph *grp);
void				ft_julia_modifier(t_graph *grp, int x, int y);
void				ft_draw_frac(t_graph *grp);
void				ft_pixel_mendel(t_graph *grp, int x, int y);
void				ft_pixel_julia(t_graph *grp, int x, int y);
int					ft_get_mouse(int btn, int x, int y, void *obj);
int					ft_get_motion(int x, int y, void *obj);
void				ft_print_origin(t_graph *grp);
void				ft_mendel_init(t_graph *grp);
void				ft_julia_init(t_graph *grp);
void				ft_bunny_init(t_graph *grp);
void				ft_blocker(t_graph *grp);
void				ft_color_step_plus(t_graph *grp);
void				ft_color_step_minus(t_graph *grp);
void				ft_zoom_step_increase(t_graph *grp);
void				ft_zoom_step_decrease(t_graph *grp);
void				ft_coordinate(t_graph *grp, int x, int y);
int					ft_color(int iter, t_graph *grp);
int					ft_color_step(int iter, t_graph *grp);
t_tone				*ft_tonenew(int color, t_tone *nxt);
void				ft_tone_mapping(t_graph *grp);
#endif
