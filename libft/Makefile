# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysachiko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/06 12:48:32 by ysachiko          #+#    #+#              #
#    Updated: 2021/10/21 19:56:17 by ysachiko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIST =		ft_isalpha.c	ft_isdigit.c	ft_isalnum.c\
			ft_isascii.c	ft_isprint.c	ft_memset.c\
			ft_bzero.c		ft_memcpy.c		ft_memmove.c\
			ft_strlen.c		ft_strlcpy.c	ft_toupper.c\
			ft_tolower.c	ft_strlcat.c	ft_strchr.c\
			ft_strrchr.c	ft_atoi.c		ft_calloc.c\
			ft_strnstr.c	ft_memchr.c		ft_strncmp.c\
			ft_strdup.c		ft_memcmp.c		ft_substr.c\
			ft_strjoin.c	ft_strtrim.c	ft_itoa.c\
			ft_split.c		ft_strmapi.c	ft_putchar_fd.c\
			ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c\
			ft_striteri.c\

OBJ = $(patsubst %.c,%.o,$(LIST))

D_FILES = $(patsubst %.c,%.d,$(LIST))

OPTFLAGS = -O2

FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJ)
		ar rcs $(NAME) $?

%.o : %.c
	gcc $(FLAGS) $(OPTFLAGS) -c $< -o $@ -MD

include $(wildcard $(D_FILES))

clean :
	@rm -f $(OBJ) $(D_FILES)

fclean : clean
	@rm -f $(NAME)

re : fclean all
