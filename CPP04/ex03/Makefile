# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yolan <yolan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/07 18:22:34 by yolan             #+#    #+#              #
#    Updated: 2025/04/08 01:32:10 by yolan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= AMateria
CC= c++
FLAGS= -g -Wall -Werror -Wextra -std=c++98
SRC=	main.cpp	AMateria.cpp	Character.cpp\
		Cure.cpp	Ice.cpp			MateriaSource.cpp\
		IMateriaSource.cpp			ICharacter.cpp
		
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re