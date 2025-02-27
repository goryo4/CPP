/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:29:19 by ygorget           #+#    #+#             */
/*   Updated: 2025/02/27 14:05:47 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(){
    std::cout << _name << " attacks with their " << weapon.getType() << std::endl;	
}

HumanA::HumanA(const class Weapon& W, std::string name) : weapon(W) {
    _name = name;
    std::cout << _name << " created" << std::endl;
}

HumanA::~HumanA(){
    std::cout << _name << " destroyed" << std::endl;
}

