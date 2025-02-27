# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/27 11:20:26 by ygorget           #+#    #+#              #
#    Updated: 2025/02/27 11:21:40 by ygorget          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Horde_Zombie
CC= c++
FLAGS= -Wall -Werror -Wextra -std=c++98
SRC= main.cpp	Zombie.cpp	zombieHorde.cpp\

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