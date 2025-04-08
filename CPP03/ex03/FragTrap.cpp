/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:28:08 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/08 16:51:03 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* ************************************************************************** */
/*                         		CONSTRUCTOR                                   */
/* ************************************************************************** */
FragTrap::FragTrap(): ClapTrap(){
	Hit_points = 100;
	Energy_points = 100;
	Attack_damage = 30;
    std::cout << "FragTrap default created\n";
}

FragTrap::FragTrap(const FragTrap& a): ClapTrap(a){
    std::cout << "FragTrap copy created\n";
}

FragTrap &FragTrap::operator=(const FragTrap& a){
	if (this != &a)
	{
		Name = a.Name;
		Hit_points = a.Hit_points;
		Energy_points = a.Energy_points;
		Attack_damage = a.Attack_damage;
	}
	std::cout << "FragTrap operation created\n";
	return (*this);
}

FragTrap::FragTrap(const std::string _Name) : ClapTrap(_Name){
	Hit_points = 100;
	Energy_points = 100;
	Attack_damage = 30;
	std::cout << "FragTrap " << _Name << " created\n";
}

/* ************************************************************************** */
/*                         		GETTER		                                  */
/* ************************************************************************** */
int FragTrap::getHit(){ return (Hit_points);}

int FragTrap::getAttack(){ return (Attack_damage);}

/* ************************************************************************** */
/*                         		FONCTION                                      */
/* ************************************************************************** */
void	FragTrap::highFivesGuys(void){
	std::cout << "high-Fives\n";
}

/* ************************************************************************** */
/*                         		DESTRUCTOR                                    */
/* ************************************************************************** */
FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called\n";
}