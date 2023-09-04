# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smatsuo <smatsuo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 18:44:30 by smatsuo           #+#    #+#              #
#    Updated: 2023/09/05 03:37:01 by smatsuo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC 		= cc
CFLAGS	= -Wall -Werror -Wextra
SRCS	= $(shell find ctype string stdlib -type f -name '*.c')
OBJS	= $(SRCS:.c=.o)
INCLUDE	= -I.

TESTS_DIR	= .tester

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $^
	
.c.o:
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test:
	make -C $(TESTS_DIR)/libftTester-forReloaded a LIBFT_PATH=$(shell pwd)

.PHONY: all clean fclean re