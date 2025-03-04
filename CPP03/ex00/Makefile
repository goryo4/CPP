# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 16:30:48 by ygorget           #+#    #+#              #
#    Updated: 2025/03/04 16:31:18 by ygorget          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= ClapTrap
CC= c++
FLAGS= -Wall -Werror -Wextra -std=c++98
SRC= main.cpp	ClapTrap.cpp\

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