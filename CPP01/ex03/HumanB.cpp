/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:29:33 by ygorget           #+#    #+#             */
/*   Updated: 2025/02/27 13:58:46 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(){
	std::string type;
	
	type = weapon.getType();
	if (type.empty())
		std::cout << _name << " have not weapon" << std::endl;
	else	   
		std::cout << _name << " attacks with their " << weapon.getType() << std::endl;	
}

HumanB::HumanB(std::string name){
    _name = name;
    std::cout << _name << " created" << std::endl;
}

HumanB::~HumanB(){
    std::cout << _name << " destroyed" << std::endl;
}