# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 16:56:10 by hookang           #+#    #+#              #
#    Updated: 2022/02/24 16:56:13 by hookang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROJECT				=	MINITALK
SERVER				=	server
CLIENT				=	client

CC					=	@gcc
CFLAGS				=	-Wall -Wextra -Werror

AR					=	@ar rcs
RM					=	@rm -rf
SH					=	@bash
NORM				=	@norminette

HEADER				=	minitalk.h
SRC_SERVER			=	server.c
SRC_CLIENT			=	client.c
SRC_BONUS			=

SRC					=	$(SRC_SERVER) $(SRC_CLIENT)
SRC_B				=	$(SRC) $(SRC_BONUS)

OBJ					=	$(SRC:%.c=%.o)
OBJ_B				=	$(SRC_B:%.c=%.o)

DIR_FT_PRINTF		=	./ft_printf
FT_PRINTF			=	$(DIR_FT_PRINTF)/libftprintf.a
LIBS				=	-I. -L./ft_printf -lftprintf

GREEN		=	\e[38;5;118m
YELLOW		=	\e[38;5;226m
RESET		=	\e[0m
_SUCCESS	=	[$(GREEN)SUCCESS$(RESET)]
_INFO		=	[$(YELLOW)INFO$(RESET)]


all: $(SERVER) $(CLIENT)

$(SERVER): $(FT_PRINTF) $(SRC_SERVER)
	$(CC) $(CFLAGS) $(SRC_SERVER) $(FT_PRINTF) -o $(SERVER)
	@printf "$(_SUCCESS) $(SERVER) successfully build.\n"

$(CLIENT): $(FT_PRINTF) $(SRC_CLIENT)
	$(CC) $(CFLAGS) $(SRC_CLIENT) $(FT_PRINTF) -o $(CLIENT)
	@printf "$(_SUCCESS) $(CLIENT) successfully build.\n"

$(FT_PRINTF):
	@make -C $(DIR_FT_PRINTF)

#	Remove all objects.
clean:
	@printf "[$(PROJECT)] [$@] Deleted File: *.o\n"
	@make -C $(DIR_FT_PRINTF) clean
	$(RM) $(OBJ) $(OBJ_B)

#	Remove all objects and executables.
fclean: clean
	@printf "[$(PROJECT)] [$@] Deleted File: $(SERVER) $(CLIENT)\n"
	@make -C $(DIR_FT_PRINTF) fclean
	$(RM) $(SERVER) $(CLIENT)

#	Call fclean -> all
re: fclean all

.PHONY: all, clean, fclean, re
