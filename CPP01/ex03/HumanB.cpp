/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:29:33 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/27 13:35:07 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack() const{
	if (weapon == NULL)
		std::cout << _name << " have not weapon" << std::endl;
	else
	{	
		std::cout << _name << " attacks with their " << weapon->getType() << std::endl;
	}	
}

void	HumanB::setWeapon(Weapon& W)
{
	weapon = &W;
}

HumanB::HumanB(std::string name){
	weapon = NULL;
	_name = name;
    std::cout << _name << " created" << std::endl;
}

HumanB::~HumanB(){
    std::cout << _name << " destroyed" << std::endl;
}
