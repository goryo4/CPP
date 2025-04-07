# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/07 13:24:01 by ygorget           #+#    #+#              #
#    Updated: 2025/03/07 14:44:14 by ygorget          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Animal
CC= c++
FLAGS= -Wall -Werror -Wextra -std=c++98
SRC=	main.cpp	Animal.cpp		Dog.cpp\
		Cat.cpp		WrongAnimal.cpp	WrongCat.cpp\
		Brain.cpp\

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