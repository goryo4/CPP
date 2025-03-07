/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:09:20 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/07 12:18:21 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void){
    ScavTrap character;
	ScavTrap character2("Bob");
	ScavTrap character3(character);
	
    character.attack(character2.getName());
    
    character = character2;
    character2.takeDamage(character3.getAttack());
    character2.beRepaired(10);
    character.beRepaired(50);
    character.attack(character3.getName());
    character.attack(character3.getName());
    character.attack(character3.getName());
    character.guardGate();
}