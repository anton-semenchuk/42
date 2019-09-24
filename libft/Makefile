# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilongtow <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/20 20:09:33 by ilongtow          #+#    #+#              #
#    Updated: 2019/09/24 14:41:38 by ilongtow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = $(wildcard *.c)

OBJS = $(patsubst %.c,%.o,$(SRCS))

INCLUDES = ./

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRCS) $(OBJS) libft.h
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o : %.c
	gcc -c $< -o $@

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
