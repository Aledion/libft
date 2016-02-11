# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroche <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/15 09:04:28 by aroche            #+#    #+#              #
#    Updated: 2016/02/04 20:32:52 by aroche           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putstr_fd.c ft_putendl.c \
	  ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_atoi.c ft_itoa.c \
	  ft_tolower.c ft_toupper.c ft_isascii.c ft_isprint.c ft_isalnum.c \
	  ft_isalpha.c ft_isdigit.c ft_strlen.c ft_strcat.c ft_strncat.c \
	  ft_strlcat.c ft_strcpy.c ft_strncpy.c ft_strequ.c ft_strnequ.c \
	  ft_strcmp.c ft_strncmp.c ft_strstr.c ft_strnstr.c ft_striter.c \
	  ft_striteri.c ft_strmap.c ft_strmapi.c ft_strchr.c ft_strrchr.c \
	  ft_strclr.c ft_strdel.c ft_strdup.c ft_strjoin.c ft_strnew.c \
	  ft_strsplit.c ft_strsub.c ft_strtrim.c ft_bzero.c ft_memalloc.c \
	  ft_memcmp.c ft_memchr.c ft_memcpy.c ft_memccpy.c ft_memdel.c \
	  ft_memmove.c ft_memset.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
	  ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_isspace.c ft_intlen.c \
	  ft_pow.c ft_freetab.c ft_lstaddlast.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	clang $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
