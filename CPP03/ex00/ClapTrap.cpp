/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:08:55 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/04 16:37:56 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _Name, int hit, int energy, int attack){
    Name = _Name;
	Hit_points = hit;
	Energy_points = energy;
	Attack_damage = attack;
    std::cout << "constructor called\n";
}

void	ClapTrap::attack(const std::string& target){
	if (Hit_points < 0)
		return ;
	if (Energy_points > 0)
		Energy_points -= 1;
	else
	{
		std::cout << "Claptrap " << Name << "has not energy\n";
		return ;
	}
	std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (Hit_points < 0)
		return ;
	std::cout << "ClapTrap " << Name << " take " << amount << " points of damage!\n";
	if (Hit_points < 0)
		std::cout << "Claptrap " << Name << "is died\n";
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (Hit_points < 0)
		return ;
	if (Energy_points > 0)
		Energy_points -= 1;
	else
	{
		std::cout << "Claptrap " << Name << "has not energy\n";
		return ;
	}
	std::cout << "ClapTrap " << Name << " repairs itself, it regains " << amount << " hit points\n";
	Hit_points -= amount;
	if (Hit_points < 0)
		std::cout << "Claptrap " << Name << "is died\n";
}


ClapTrap::~ClapTrap(){
    std::cout << "destructor called\n";
}