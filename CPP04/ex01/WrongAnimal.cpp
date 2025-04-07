/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:04:12 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/28 14:14:31 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    type = "";
    std::cout << "Default WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal& a){
    type = a.getType();
    std::cout << "copy WrongAnimal constructor called\n";
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal& a){
    if (this != &a)
		type = a.getType();
	std::cout << "operator WrongAnimal constructor called\n";
	return (*this);
}

std::string	WrongAnimal::getType(){return type;}

void	WrongAnimal::makeSound(){
	std::cout << "The Wronganimal makes a noise\n";
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal tor called\n";
}