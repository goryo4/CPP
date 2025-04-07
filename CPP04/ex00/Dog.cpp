/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:56:02 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/28 14:14:19 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(){
    type = "Dog";
    std::cout << "Default Dog constructor called\n";
}

Dog::Dog(const Dog& a) : Animal(a){
    type = a.getType();
    std::cout << "copy Dog constructor called\n";
}

Dog &Dog::operator=(const Dog& a){
    if (this != &a)
		type = a.getType();
	std::cout << "operator Dog constructor called\n";
	return (*this);
}

void	Dog::makeSound() const{
	std::cout << "Woof\n";
}

Dog::~Dog(){
	std::cout << "Dog destructor called\n";
}