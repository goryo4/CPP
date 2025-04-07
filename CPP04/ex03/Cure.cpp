/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:17:31 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/07 13:59:14 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

AMateria* Cure::clone () const{
    return (new Cure(*this));
}

void    Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

Cure::~Cure() {}