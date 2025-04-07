/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:52:41 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/28 14:14:44 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal(){
    type = "Cat";
    c_Brain = new Brain();
    std::cout << "Default Cat constructor called\n";
}

Cat::Cat(Cat& a) : Animal(a){
    type = a.getType();
    std::cout << "copy Cat constructor called\n";
}

Cat &Cat::operator=(Cat& a){
    if (this != &a)
		type = a.getType();
	std::cout << "operator Cat constructor called\n";
	return (*this);
}

void	Cat::makeSound(){
	std::cout << "Miaou\n";
}

Cat::~Cat(){
    delete c_Brain;
	std::cout << "Cat destructor called\n";
}