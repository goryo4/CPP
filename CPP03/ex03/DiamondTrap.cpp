/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:26:37 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/09 13:50:37 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Tom_clap_name"), FragTrap(), ScavTrap(), Name("Tom"){
	Hit_points = FragTrap::Hit_points;
	Energy_points = ScavTrap::Energy_points;
	Attack_damage = FragTrap::Attack_damage;
    std::cout << "DiamondTrap default created\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const &a): ClapTrap(a), FragTrap(), ScavTrap(){
	*this = a;
    std::cout << "DiamondTrap copy created\n";
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &a){
	if (this != &a)
	{
		ClapTrap::operator=(a);
		Name = a.Name;
	}
	std::cout << "DiamondTrap operation created\n";
	return (*this);
}

DiamondTrap::DiamondTrap(const std::string _Name) 
	: ClapTrap(_Name + "_clap_name"), FragTrap(), ScavTrap(), Name(_Name){
	Hit_points = FragTrap::Hit_points;
	Energy_points = ScavTrap::Energy_points;
	Attack_damage = FragTrap::Attack_damage;
	std::cout << "DiamondTrap created\n";

}

void	DiamondTrap::attack(const std::string &target){
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() const{
	std::cout << "ClapTrap Name is " << ClapTrap::Name << " and DiamonTrap name is " << Name << std::endl;	
}