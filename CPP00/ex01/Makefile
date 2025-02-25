# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/25 14:58:52 by ygorget           #+#    #+#              #
#    Updated: 2025/02/25 15:05:08 by ygorget          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Phonebook
CC= c++
FLAGS=  -Wall -Werror -Wextra -std=c++98
SRC= main.cpp	Contact.cpp		PhoneBook.cpp\

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