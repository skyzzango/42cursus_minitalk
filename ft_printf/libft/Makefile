# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hookang <hookang@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/04 19:08:10 by hookang           #+#    #+#              #
#    Updated: 2021/06/04 19:08:13 by hookang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROJECT				=	LIBFT
NAME				=	libft.a

CC					=	@gcc
CFLAGS				=	-Wall -Wextra -Werror

AR					=	@ar rcs
RM					=	@rm -rf
SH					=	@bash
NORM				=	@norminette

HEADER				=	libft.h
STR					=	ft_strlen.c				ft_strlcpy.c			ft_strlcat.c			ft_strchr.c				\
						ft_strrchr.c			ft_strncmp.c			ft_strnstr.c			ft_strdup.c				\
						ft_substr.c				ft_strjoin.c			ft_strtrim.c			ft_split.c				\
						ft_strmapi.c			ft_striteri.c			ft_putchar_fd.c			ft_putstr_fd.c			\
						ft_putendl_fd.c			ft_putnbr_fd.c			ft_str_isdigit.c
UTILS				=	ft_isalpha.c			ft_isdigit.c			ft_isalnum.c			ft_isascii.c			\
						ft_isprint.c			ft_isspace.c			ft_islower.c			ft_isupper.c			\
						ft_isbetween.c			ft_nbrlen.c
MEM					=	ft_bzero.c				ft_memset.c				ft_memcpy.c				ft_memccpy.c			\
						ft_memmove.c			ft_memchr.c				ft_memcmp.c				ft_calloc.c				\
						ft_stralloc.c
CONVERT				=	ft_toupper.c			ft_tolower.c			ft_atoi.c				ft_itoa.c
BONUS				=

SRC					=	$(STR) $(UTILS) $(MEM) $(CONVERT)
SRC_B				=	$(SRC) $(BONUS)

OBJ					=	$(SRC:%.c=%.o)
OBJ_B				=	$(SRC_B:%.c=%.o)


#	Make all files.
all: $(NAME)

#	Normal Compiling
$(NAME): $(OBJ)
	@printf "[$(PROJECT)] [$@] Compiled LIB(Nomal): "
	$(AR) $(NAME) $(OBJ)
	@printf "$(NAME)\n"

%.o: %.c
	@printf "[$(PROJECT)] [$@] Compiled OBJ: $< -> "
	$(CC) $(CFLAGS) -c $< -o $@
	@printf "$@\n"

#	Remove all objects.
clean:
	@printf "[$(PROJECT)] [$@] Deleted File: *.o\n"
	$(RM) $(OBJ) $(OBJ_B)

#	Remove all objects and executables.
fclean: clean
	@printf "[$(PROJECT)] [$@] Deleted File: $(NAME)\n"
	$(RM) $(NAME)

#	Call fclean -> all
re: fclean all

.PHONY: all, clean, fclean, re
