/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:46:45 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/28 14:14:13 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    type = "";
    std::cout << "Default Animal constructor called\n";
}

Animal::Animal(const Animal& a){
    type = a.getType();
    std::cout << "copy Animal constructor called\n";
}

Animal &Animal::operator=(const Animal& a){
    if (this != &a)
		type = a.getType();
	std::cout << "operator Animal constructor called\n";
	return (*this);
}

const std::string	Animal::getType() const {return type;}

void	Animal::makeSound() const{
	std::cout << "The animal makes a noise\n";
}

Animal::~Animal(){
	std::cout << "Animal destructor called\n";
}
