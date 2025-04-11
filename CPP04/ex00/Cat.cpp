/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:52:41 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/09 15:44:36 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(){
    type = "Cat";
    std::cout << "Default Cat constructor called\n";
}

Cat::Cat(const Cat& a) : Animal(a){
    type = a.getType();
    std::cout << "copy Cat constructor called\n";
}

Cat &Cat::operator=(const Cat& a){
    if (this != &a)
		type = a.getType();
	std::cout << "operator Cat constructor called\n";
	return (*this);
}

void	Cat::makeSound() const{
	std::cout << "Miaou\n";
}

Cat::~Cat(){
	std::cout << "Cat destructor called\n";
}