# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asokolov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/20 17:21:06 by asokolov          #+#    #+#              #
#    Updated: 2022/02/05 06:20:44 by asokolov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

CC = gcc $(CFLAGS)

SRC = ft_printf.c libft.c ft_hex.c

OBJS = $(SRC:.c=.o)

%.o : %.c
	${CC} -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	ar rcs $@ $^

all: $(NAME)


clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
