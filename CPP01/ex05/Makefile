# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/27 16:06:28 by ygorget           #+#    #+#              #
#    Updated: 2025/02/28 14:39:24 by ygorget          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Harl
CC= c++
FLAGS= -Wall -Werror -Wextra -std=c++98
SRC= main.cpp	Harl.cpp\

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