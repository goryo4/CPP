/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:44:47 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/07 15:04:04 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	static int i = 0;
	
	if (i >= 100)
	{
		std::cout << "ideas is full\n";
		return ;
	}
    ideas[i] = "";
    i++;
    std::cout << "Default Brain constructor called\n";
}

Brain::Brain(Brain& a){
	int i = 0;
	
	while (i < 100)
	{
		ideas[i] = a.ideas[i];
		i++;
	}
    std::cout << "copy Brain constructor called\n";
}

Brain &Brain::operator=(Brain& a){
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

Brain::~Brain(){
	std::cout << "Cat desstructor called\n";
}