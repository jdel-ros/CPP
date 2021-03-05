# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/18 18:04:58 by juan              #+#    #+#              #
#    Updated: 2021/03/05 09:52:46 by jdel-ros         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME 	=	whitepages
SRC 	=	main.cpp Contact.cpp
RM 		=	rm -fclean
C 		=	clang++
FLAGS 	=	-Wall -Wextra -Werror -std=c++98
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
