# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/01 14:40:13 by jdel-ros          #+#    #+#              #
#    Updated: 2021/03/05 10:13:50 by jdel-ros         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME 	=	sed_loser
SRC 	=	main.cpp
RM 		=	rm -fclean
C 		=	clang++
FLAGS 	=	-Wall -Wextra -Werror -std=c++98
OBJ 	=	${SRC:.cpp=.o}

all: $(NAME)

%.o:%.cpp
	$(C) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(C) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
