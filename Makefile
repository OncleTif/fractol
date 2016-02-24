# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/07 09:19:22 by tmanet            #+#    #+#              #
#    Updated: 2016/02/24 17:24:08 by tmanet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

CC = gcc

FLAGS = -Wall -Wextra -Werror

LIB = libft/libft.a

MINILIBX = -lmlx -framework OpenGL -framework AppKit

SRC =   main.c \
		make_window.c \
		ft_draw_line.c \
		ft_print_key.c \
		ft_get_key.c \
		ft_get_mouse.c \
		ft_expose.c \
		ft_move_dwn.c \
		ft_move_lft.c \
		ft_move_rgt.c \
		ft_move_up.c \
		ft_key_mapping.c \
		ft_keymapnew.c \
		ft_origin.c \
		ft_line_init.c \
		ft_zoom_in.c \
		ft_zoom_out.c \
		ft_text.c \
		ft_zoom_opti.c \
		ft_size_opti.c \
		ft_draw_frac.c \
		ft_pixel_mendel.c


OBJ = $(SRC:.c=.o)

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ) $(LIB) $(MINILIBX)
	@echo "COMPILATION de $(NAME)"

%.o: %.c $@
	@$(CC) $(FLAGS) -c $<
	@echo "compilation de $<"

clean:
	@make -C libft clean
	@echo "suppression des objets de la lib"
	@rm -rf $(OBJ)
	@echo "suppression des objets"

fclean: clean
	@make -C libft fclean
	@echo "suppression de la lib"
	@rm -rf $(NAME)
	@echo "suppression de $(NAME)"

re: fclean all
