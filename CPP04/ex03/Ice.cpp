/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:32:55 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/08 16:31:18 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice (std::string const &_type): AMateria(_type){}

Ice::Ice (AMateria const &m): AMateria(m.getType()){}

AMateria &Ice::operator=(AMateria const &m){
	if (this != &m)
		type = m.getType();
	return (*this);
}

AMateria* Ice::clone () const{
    return (new Ice(*this));
}

void    Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::~Ice() {}