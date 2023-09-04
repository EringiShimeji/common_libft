# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smatsuo <smatsuo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 18:44:30 by smatsuo           #+#    #+#              #
#    Updated: 2023/09/04 19:34:32 by smatsuo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC 		= cc
CFLAGS	= -Wall -Werror -Wextra
SRCS	= $(shell find . -type f -name '*.c')
OBJS	= $(SRCS:.c=.o)

TESTS_DIR	= .tester

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $^
	
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test:
	cd $(TESTS_DIR)/libftTester

.PHONY: all clean fclean re