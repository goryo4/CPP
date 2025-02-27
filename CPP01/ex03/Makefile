# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/27 12:08:28 by ygorget           #+#    #+#              #
#    Updated: 2025/02/27 14:07:32 by ygorget          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Weapon
CC= c++
FLAGS= -Wall -Werror -Wextra -std=c++98
SRC= main.cpp	HumanA.cpp	HumanB.cpp\
	Weapon.cpp\

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