/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:06:28 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/28 14:14:35 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
    type = "WrongCat";
    std::cout << "Default WrongCat constructor called\n";
}

WrongCat::WrongCat(WrongCat& a) : WrongAnimal(a){
    type = a.getType();
    std::cout << "copy WrongCat constructor called\n";
}

WrongCat &WrongCat::operator=(WrongCat& a){
    if (this != &a)
		type = a.getType();
	std::cout << "operator WrongCat constructor called\n";
	return (*this);
}

void	WrongCat::makeSound(){
	std::cout << "Miaous\n";
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called\n";
}