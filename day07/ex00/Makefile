# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/23 15:14:08 by jdel-ros          #+#    #+#              #
#    Updated: 2021/03/29 13:06:45 by jdel-ros         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME 	=	whatever
SRC 	=	main.cpp
RM 		=	rm -fclean
C 		=	clang++
FLAGS 	=	-Wall -Wextra -Werror -Wconversion -std=c++98
OBJ 	=	${SRC:.cpp=.o}

all: $(NAME)

$(OBJ): %.o:%.cpp
	$(C) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(C) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
