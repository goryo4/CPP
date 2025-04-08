/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:17:31 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/08 16:31:03 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::Cure (std::string const &_type): AMateria(_type){}

Cure::Cure (AMateria const &m): AMateria(m.getType()){}

AMateria &Cure::operator=(AMateria const &m){
	if (this != &m)
		type = m.getType();
	return (*this);
}

AMateria* Cure::clone () const{
    return (new Cure(*this));
}

void    Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

Cure::~Cure() {}