/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:26:37 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/07 11:53:34 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap() {
	Name = getName();
	Hit_points = getHit();
   	Energy_points = getEnergy();
   	Attack_damage = getAttack();
    std::cout << "DiamondTrap default created\n";
}

DiamondTrap::DiamondTrap(DiamondTrap& a): ClapTrap(a){
    Name = a.Name;
    Hit_points = a.Hit_points;
    Energy_points = a.Energy_points;
    Attack_damage = a.Attack_damage;
    std::cout << "DiamondTrap copy created\n";
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap& a){
	if (this != &a)
	{
		Name = a.Name;
		setName(a.Name);
	    Hit_points = a.Hit_points;
    	Energy_points = a.Energy_points;
    	Attack_damage = a.Attack_damage;
	}
	std::cout << "DiamondTrap operation created\n";
	return (*this);
}

DiamondTrap::DiamondTrap(std::string _Name) : ClapTrap(_Name){
	Name = _Name;
	Hit_points = getHit();
   	Energy_points = getEnergy();
   	Attack_damage = getAttack();
	std::cout << "DiamondTrap created\n";

}

void	DiamondTrap::whoAmI(){
	std::cout << "ClapTrap Name is " << getName() << " and DiamonTrap name is " << Name << std::endl;	
}