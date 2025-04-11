/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:09:20 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/09 12:21:48 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void){
    ScavTrap character;
	ScavTrap character2("Bob");
	ScavTrap character3(character);
	
    std::cout << std::endl;
    character.attack("mob1");
    
    character3 = character2;
    character2.takeDamage(100);
    character2.beRepaired(10);
    character.beRepaired(50);
    character.attack("mob1");
    character.attack("mob1");
    character.guardGate();

	std::cout << std::endl;
}