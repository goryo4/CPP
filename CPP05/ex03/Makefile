# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/11 11:39:55 by ygorget           #+#    #+#              #
#    Updated: 2025/04/15 11:34:30 by ygorget          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Form
CXX= c++
FLAGS= -Wall -Werror -Wextra -std=c++98
SRC=	main.cpp					Bureaucrat.cpp			AForm.cpp\
		PresidentialPardonForm.cpp	RobotomyRequestForm.cpp	ShrubberyCreationForm.cpp

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