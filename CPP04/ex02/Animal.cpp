/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:46:45 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/10 12:23:39 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    type = "";
    std::cout << "Default Animal constructor called\n";
}

Animal::Animal(Animal const &a){
    type = a.getType();
    std::cout << "copy Animal constructor called\n";
}

Animal &Animal::operator=(Animal const &a){
    if (this != &a)
		type = a.getType();
	std::cout << "operator Animal constructor called\n";
	return (*this);
}

std::string	Animal::getType() const {return type;}

Animal::~Animal(){
	std::cout << "Animal destructor called\n";
}
