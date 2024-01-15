# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maramiev <maramiev@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 12:01:05 by maramiev          #+#    #+#              #
#    Updated: 2024/01/11 13:07:53 by maramiev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc
CLEAN = rm -Rf
SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c \
ft_memset.c ft_strlen.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c

OBJS = $(SRC:.c=.o)
all: $(NAME)
$(NAME):$(OBJS)
	@ar rcs $(NAME) $(OBJS)
%.o:%.c
	@$(CC) $(CFLAGS) -c $< -o $@
clean:
	@$(CLEAN) ./*.o
fclean:
	@$(CLEAN) ./*.o
	@$(CLEAN) ./*.a
re: fclean all
.PHONY: all clean fclean re

# NAME : Aqui el archivo esperado de salida al hacer la ejecucion es libft.a
# CC y CFLAGS : creamos dichas variables para compilar con cc y los flags
# SRC : creamos la variable SRC y le asignamos los archivos .c
# OBJS : creamos los archivos objetos (.o) desde SRC
# All : Este target chequea que exista NAME y si no existe lo crea, luego ejecuta clean
# Clean : Este target borra los archivos objetos (.o)
# Makefile verifica que exista NAME sino pasa a la siguiente linea
# busca cualquier archivo .o en la variable OBJS si esta presente usa ar
# ar: crea un archivo que se convierte en nuestra biblioteca estatica
# rcs: rc-inserta y/o remplaza/crea archivos .o en la biblioteca, s-crea indices 
# clean: borra los archivos .o creados en OFILES