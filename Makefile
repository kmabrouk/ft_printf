# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 18:56:27 by kmabrouk          #+#    #+#              #
#    Updated: 2021/12/10 19:34:01 by kmabrouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

srcs = ft_putvoid.c ft_printf.c ft_putchar.c ft_printhexa.c \
	ft_putunbr.c ft_print_pourcentage.c ft_putnbr.c \
	ft_print_hexa_upper.c ft_putstr.c

objets = $(srcs:.c=.o)

all : $(NAME)

$(NAME) : $(objets) ft_printf.h
	ar rcs $(NAME) $^

%.o : %.c
	gcc -Wall -Werror -Wextra -c $< -o $@

clean :
	rm -f $(objets)

fclean : clean
	rm -f $(NAME)

re : fclean all