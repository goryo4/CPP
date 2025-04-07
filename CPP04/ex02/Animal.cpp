/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:46:45 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/28 14:14:40 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    type = "";
    std::cout << "Default Animal constructor called\n";
}

Animal::Animal(Animal& a){
    type = a.getType();
    std::cout << "copy Animal constructor called\n";
}

Animal &Animal::operator=(Animal& a){
    if (this != &a)
		type = a.getType();
	std::cout << "operator Animal constructor called\n";
	return (*this);
}

std::string	Animal::getType(){return type;}

void	Animal::makeSound(){
	std::cout << "The animal makes a noise\n";
}

Animal::~Animal(){
	std::cout << "Animal destructor called\n";
}
