/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:43:09 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/07 14:00:57 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria (): type(""){}

AMateria::AMateria (std::string const &_type): type(_type){}

std::string const &AMateria::getType() const{
    return (type);
}

void    AMateria::use(ICharacter &target){
    std::cout << "Materia use at " << target.getName() << std::endl;
}

AMateria::~AMateria(){}