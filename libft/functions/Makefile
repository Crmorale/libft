# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crmorale <crmorale@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/08 14:17:06 by crmorale          #+#    #+#              #
#    Updated: 2024/01/08 14:31:26 by crmorale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# (Nombre del archivo creado al ejecutar Makefile)
NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	   ft_strlen.c ft_memset.c ft_bzero.c ft_toupper.c ft_tolower.c

OFILES = $(SRCS:.c=.0)
CC = gcc
#Makefile compila todo con gcc usando los flags siguientes.
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(name): $(OFILES)
		ar rcs $(NAME) $(OFILES)

#para que no haga relink
%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re

# rm -f para que borre los archivos sin confirmar
clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
