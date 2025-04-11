/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:43:05 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/09 12:25:51 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* ************************************************************************** */
/*                         		CONSTRUCTOR                                   */
/* ************************************************************************** */
ScavTrap::ScavTrap(): ClapTrap(){
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
	std::cout << "ScavTrap default created\n";
}

ScavTrap::ScavTrap(const ScavTrap& a): ClapTrap(a){
	std::cout << "ScavTrap copy created\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap& a){
	if (this != &a)
		ClapTrap::operator=(a);
	std::cout << "ScavTrap operator created\n";
	return (*this);
}

ScavTrap::ScavTrap(const std::string _Name) : ClapTrap(_Name) {
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
	std::cout << "ScavTrap " << _Name << " created\n";
}


/* ************************************************************************** */
/*                         		FONCTION                                      */
/* ************************************************************************** */
void	ScavTrap::attack(const std::string& target){
	if (Hit_points <= 0)
	{
		std::cout << "Scavtrap " << Name << " is died\n";
		return ;
	}
	if (Energy_points > 0)
		Energy_points -= 1;
	else
	{
		std::cout << "ScavTrap " << Name << " has not energy\n";
		return ;
	}
	std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!\n";
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap " << Name << " is now in Gate keeper mode.\n";
}


/* ************************************************************************** */
/*                         		DESTRUCTOR                                    */
/* ************************************************************************** */
ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called\n";
}