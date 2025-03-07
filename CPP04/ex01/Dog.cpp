/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:56:02 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/07 15:08:34 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal(){
    type = "Dog";
    d_Brain = new Brain();
    std::cout << "Default Dog constructor called\n";
}

Dog::Dog(Dog& a) : Animal(a){
    type = a.getType();
    std::cout << "copy Dog constructor called\n";
}

Dog &Dog::operator=(Dog& a){
    if (this != &a)
		type = a.getType();
	std::cout << "operator Dog constructor called\n";
	return (*this);
}

void	Dog::makeSound(){
	std::cout << "Woof\n";
}

Dog::~Dog(){
    delete d_Brain;
	std::cout << "Dog desstructor called\n";
}