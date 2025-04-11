# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/11 11:39:55 by ygorget           #+#    #+#              #
#    Updated: 2025/04/11 12:31:01 by ygorget          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Bureaucrat
CXX= c++
FLAGS= -Wall -Werror -Wextra -std=c++98
SRC= main.cpp	Bureaucrat.cpp\

OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re