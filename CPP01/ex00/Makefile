# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/26 14:10:52 by ygorget           #+#    #+#              #
#    Updated: 2025/02/26 14:16:43 by ygorget          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Zombie
CC= c++
FLAGS= -Wall -Werror -Wextra -std=c++98
SRC= main.cpp	newZombie.cpp	randomChump.cpp\
		Zombie.cpp

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