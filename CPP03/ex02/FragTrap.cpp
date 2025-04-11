/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:28:08 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/09 12:27:06 by ygorget          ###   ########.fr       */
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
		ClapTrap::operator=(a);
	std::cout << "FragTrap operator created\n";
	return (*this);
}

FragTrap::FragTrap(const std::string _Name) : ClapTrap(_Name){
	Hit_points = 100;
	Energy_points = 100;
	Attack_damage = 30;
	std::cout << "FragTrap " << _Name << " created\n";
}

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