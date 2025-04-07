/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:23:13 by ygorget           #+#    #+#             */
/*   Updated: 2025/02/27 14:00:00 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string&	Weapon::getType () const{
	return (_type);
}

void	Weapon::setType(std::string new_type){
	_type = new_type;
}

Weapon::Weapon () {
    std::cout << "weapon created" << std::endl;
}

Weapon::Weapon (std::string type) {
    _type = type;
    std::cout << "weapon created" << std::endl;
}

Weapon::~Weapon() {
    std::cout << "weapon destroyed" << std::endl;
}
