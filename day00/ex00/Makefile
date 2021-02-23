# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/18 18:04:58 by juan              #+#    #+#              #
#    Updated: 2021/01/18 18:08:38 by juan             ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME 	=	megaphone
SRC 	=	megaphone.cpp
RM 		=	rm -fclean
C 		=		clang++
FLAGS 	=	-Wall -Wextra -Werror -std=c++98
OBJ 	=	megaphone.o

all: $(NAME)

%.o:%.c
	$(C) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(C) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re