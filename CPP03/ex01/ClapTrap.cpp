/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:08:55 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/07 12:20:09 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ************************************************************************** */
/*                         		CONSTRUCTOR                                   */
/* ************************************************************************** */
ClapTrap::ClapTrap(){
	Name = "tom";
	Hit_points = 0;
	Energy_points = 0;
	Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string _Name){
    Name = _Name;
	Hit_points = 10;
	Energy_points = 10;
	Attack_damage = 0;
    std::cout << "constructor called\n";
}

ClapTrap::ClapTrap(ClapTrap& a){
	*this = a;
	std::cout << "ClapTrap copy created\n";
}

ClapTrap &ClapTrap::operator=(ClapTrap& a){
	if (this != &a)
	{
		Name = a.Name;
		Hit_points = a.Hit_points;
		Energy_points = a.Energy_points;
		Attack_damage = a.Attack_damage;
	}
	std::cout << "ClapTrap operation created\n";
	return (*this);
}

/* ************************************************************************** */
/*                         		GETTER		                                  */
/* ************************************************************************** */
std::string ClapTrap::getName(){ return (Name);}

int ClapTrap::getHit(){ return (Hit_points);}

int ClapTrap::getEnergy(){ return (Energy_points);}

int ClapTrap::getAttack(){ return (Attack_damage);}


/* ************************************************************************** */
/*                         		FONCTION                                      */
/* ************************************************************************** */
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

/* ************************************************************************** */
/*                         		DESTRUCTOR                                    */
/* ************************************************************************** */
ClapTrap::~ClapTrap(){
    std::cout << "destructor called\n";
}