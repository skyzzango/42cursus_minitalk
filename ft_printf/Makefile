# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/20 12:33:26 by hookang           #+#    #+#              #
#    Updated: 2022/01/21 14:09:50 by hookang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROJECT				=	FT_PRINTF
NAME				=	libftprintf.a

CC					=	@gcc
CFLAGS				=	-Wall -Wextra -Werror

AR					=	@ar rcs
RM					=	@rm -rf
SH					=	@bash
NORM				=	@norminette

HEADER				=	ft_printf.h
SRC_PRINTF			= 	ft_printf.c				ft_print_nbr.c			ft_printf_utils.c
SRC_BONUS			=

SRC					=	$(SRC_PRINTF)
SRC_B				=	$(SRC) $(SRC_BONUS)

OBJ					=	$(SRC:%.c=%.o)
OBJ_B				=	$(SRC_B:%.c=%.o)

DIR_LIBFT			=	./libft
LIBFT				=	$(DIR_LIBFT)/libft.a


#	Make all files.
all: $(NAME)

#	Normal Compiling
$(NAME): $(LIBFT) $(OBJ)
	@printf "[$(PROJECT)] [$@] Compiled LIB(Nomal): "
	@cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJ)
	@printf "$(NAME)\n"

$(LIBFT):
	@make -C $(DIR_LIBFT)

%.o: %.c
	@printf "[$(PROJECT)] [$@] Compiled OBJ: $< -> "
	$(CC) $(CFLAGS) -c $< -o $@
	@printf "$@\n"

#	Remove all objects.
clean:
	@printf "[$(PROJECT)] [$@] Deleted File: *.o\n"
	@make -C $(DIR_LIBFT) clean
	$(RM) $(OBJ) $(OBJ_B)

#	Remove all objects and executables.
fclean: clean
	@printf "[$(PROJECT)] [$@] Deleted File: $(NAME)\n"
	@make -C $(DIR_LIBFT) fclean
	$(RM) $(NAME)

#	Call fclean -> all
re: fclean all

.PHONY: all, clean, fclean, re
