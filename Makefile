# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/07 09:19:22 by tmanet            #+#    #+#              #
#    Updated: 2016/03/06 20:17:28 by tmanet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

CC = gcc

FLAGS = -Wall -Wextra -Werror

LIB = libft/libft.a

MINILIBX = -lmlx -framework OpenGL -framework AppKit

SRC =   main.c \
		make_window.c \
		ft_print_key.c \
		ft_print_origin.c \
		ft_get_key.c \
		ft_get_mouse.c \
		ft_get_motion.c \
		ft_expose.c \
		ft_move_dwn.c \
		ft_move_lft.c \
		ft_move_rgt.c \
		ft_move_up.c \
		ft_key_mapping.c \
		ft_key_mapping_mendel.c \
		ft_key_mapping_julia.c \
		ft_keymapnew.c \
		ft_origin_julia.c \
		ft_origin_bunny.c \
		ft_origin_mendel.c \
		ft_origin.c \
		ft_zoom_in.c \
		ft_zoom_out.c \
		ft_zoom_step_increase.c \
		ft_zoom_step_decrease.c \
		ft_text.c \
		ft_zoom_opti.c \
		ft_draw_frac.c \
		ft_color.c \
		ft_color_step.c \
		ft_blocker.c \
		ft_tonenew.c \
		ft_tone_mapping.c \
		ft_pixel_julia.c \
		ft_coordinate.c \
		ft_mendel_init.c \
		ft_julia_init.c \
		ft_bunny_init.c \
		ft_julia_modifier.c \
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

norme:
	@make -C libft norme
	@norminette $(SRC) fractol.h
test: $(NAME)
	./$(NAME) mandel

mandel: $(NAME)
	./$(NAME) mandel

julia: $(NAME)
	./$(NAME) julia

bunny: $(NAME)
	./$(NAME) bunny
