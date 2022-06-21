# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/21 15:00:30 by mle-biha          #+#    #+#              #
#    Updated: 2022/06/21 15:00:32 by mle-biha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libftprintf.a
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -I. -g
AR      = ar
ARFLAGS = -cvq
SRC     = ft_printf.c \

OBJ     = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
    $(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o: %.c %.h
    $(CC) $(CFLAGS) $< -c -o $@

clean:
    rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
    rm -f $(NAME)

re: fclean all

.PHONY : clean fclean re all