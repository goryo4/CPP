# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/03 16:32:09 by ygorget           #+#    #+#              #
#    Updated: 2025/04/03 14:52:38 by ygorget          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= bsp
CC= c++
FLAGS= -Wall -Werror -Wextra -std=c++98
SRC= main.cpp	Fixed.cpp	Point.cpp\
	bsp.cpp\

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