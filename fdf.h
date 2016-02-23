/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 12:00:23 by tmanet            #+#    #+#             */
/*   Updated: 2016/02/23 13:33:27 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <mlx.h>
# include <fcntl.h>
# include <math.h>
# include "libft/libft.h"
# define HEIGHT 500
# define WIDTH 500

typedef struct		s_node
{
	int				x;
	int				y;
	int				z;
	int				color;
	int				p_x;
	int				p_y;
	struct s_node	*up;
	struct s_node	*dwn;
	struct s_node	*lft;
	struct s_node	*rgt;
}					t_node;

typedef struct		s_graph
{
	int				width;
	int				zoom;
	double			zoom_x;
	double			zoom_y;
	int				zoom_opti;
	int				zoom_step;
	int				height;
	int				x_offset;
	int				y_offset;
	struct s_keymap	*keymap;
	t_node			*node;
	void			*mlx;
	void			*win;
	int				x_max;
	int				y_max;
	int				x_mid;
	int				y_mid;
	int				z_min;
	int				z_max;
}					t_graph;

typedef struct		s_line
{
	int				err;
	int				err2;
	int				sx;
	int				sy;
	int				px;
	int				py;
	int				dx;
	int				dy;
}					t_line;

typedef	struct		s_keymap
{
	int				key;
	void			(*f)(t_graph*);
	struct s_keymap	*next;
}					t_keymap;

t_keymap			*ft_keymapnew(int key, t_keymap *nxt, void (*f)(t_graph*));
t_keymap			*ft_key_mapping(void);
t_list				*ft_reader(char *str);
void				make_window(t_list *list);
void				ft_draw(t_graph *graph);
void				ft_zoom_in(t_graph *graph);
void				ft_zoom_out(t_graph *graph);
void				ft_zoom_opti(t_graph *graph);
void				ft_size_opti(t_graph *graph);
void				ft_move_dwn(t_graph *graph);
void				ft_move_lft(t_graph *graph);
void				ft_move_rgt(t_graph *graph);
void				ft_move_up(t_graph *graph);
void				ft_origin(t_graph *graph);
void				ft_print_key(int key);
void				ft_text(t_graph *grp);
int					ft_get_key(int key, void *obj);
int					ft_expose(void *obj);
void				ft_map_builder(t_list *lst, t_graph *grp);
void				ft_map_relative(t_graph *grp);
void				ft_draw_line(t_node *node1, t_node *node2, t_graph *grp);
void				ft_projector_iso(t_graph *grp, t_node *node);
t_node				*ft_line_to_nodes(char **lst, t_node *lst_ln, t_graph *grp);
void				ft_line_init(t_node *node1, t_node *node2, t_line *ln);
t_node				*ft_newnode(int x, int y, int z, t_graph *grp);
int					ft_limiter(int x, int y, t_graph *grp);
void				ft_draw_frac(t_graph *grp);
void				ft_pixel_frac(t_graph *grp, int x, int y);
#endif
