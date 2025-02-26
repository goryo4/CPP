# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/26 13:04:39 by ygorget           #+#    #+#              #
#    Updated: 2025/02/26 13:06:07 by ygorget          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Account
CC= c++
FLAGS= -Wall -Werror -Wextra -std=c++98
SRC= tests.cpp		Account.cpp\

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