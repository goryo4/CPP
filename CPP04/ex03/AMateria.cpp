/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:43:09 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/08 16:30:34 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria (): type(""){}

AMateria::AMateria (std::string const &_type): type(_type){}

AMateria::AMateria (AMateria const &m): type(m.getType()){}

AMateria &AMateria::operator=(AMateria const &m){
	if (this != &m)
		type = m.getType();
	return (*this);
}

std::string const &AMateria::getType() const{
    return (type);
}

void    AMateria::use(ICharacter &target){
    std::cout << "Materia use at " << target.getName() << std::endl;
}

AMateria::~AMateria(){}