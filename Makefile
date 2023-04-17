# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asarria- <asarria-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 10:56:00 by asarria-          #+#    #+#              #
#    Updated: 2023/03/06 14:58:14 by asarria-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
LIB = ar rcs
RM = rm -f

CC=gcc

SRC= ./libft.c \
	 ./ft_bzero.c \
	 ./ft_isascii.c \
	 ./ft_isdigit.c \
	 ./ft_isprint.c \
	 ./ft_isalpha.c \
	 ./ft_isalnum.c \
	 ./ft_itoa.c \
	 ./ft_memchr.c \
	 ./ft_memcmp.c \
	 ./ft_memcpy.c \
	 ./ft_memmove.c \
	 ./ft_memset.c \
	 ./ft_putchar_fd.c \
	 ./ft_putendl_fd.c \
	 ./ft_putnbr_fd.c \
	 ./ft_putstr_fd.c \
	 ./ft_split.c \
	 ./ft_strchr.c \
	 ./ft_strrchr.c \
	 ./ft_strdup.c \
	 ./ft_striteri.c \
	 ./ft_strjoin.c \
	 ./ft_strlcat.c \
	 ./ft_strlcpy.c \
	 ./ft_strlen.c \
	 ./ft_strmapi.c \
	 ./ft_strncmp.c \
	 ./ft_strnstr.c \
	 ./ft_strtrim.c \
	 ./ft_substr.c \
	 ./ft_tolower.c \
	 ./ft_toupper.c \
	 ./ft_atoi.c \
	 ./ft_calloc.c

OBJ = $(SRC:.c=.o)
INCLUDE = libft.h

CFLAGS=-Wall -Wextra -Werror

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

all:	$(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	 $(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
