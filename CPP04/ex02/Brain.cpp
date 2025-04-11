/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:44:47 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/10 11:50:51 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	for (int j = 0; j < 100; ++j){
		ideas[j] = "";
	}
    std::cout << "Default Brain constructor called\n";
}

Brain::Brain(Brain const &a){
	int i = 0;
	
	while (i < 100)
	{
		ideas[i] = a.ideas[i];
		i++;
	}
    std::cout << "copy Brain constructor called\n";
}

Brain &Brain::operator=(Brain const &a){
    int i = 0;
	
	if (this != &a)
	{
		while (i < 100)
		{
			ideas[i] = a.ideas[i];
			i++;
		}
	}
	std::cout << "operator Brain constructor called\n";
	return (*this);
}

void	Brain::setIdeas(std::string idea, int i){
	ideas[i] = idea;
}

std::string	Brain::getIdea(int i){
	return (ideas[i]);
}

Brain::~Brain(){
	std::cout << "Cat destructor called\n";
}