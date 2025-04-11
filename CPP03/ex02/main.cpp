/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:09:20 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/09 12:27:55 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void){
    FragTrap character;
    FragTrap character2("Sam");
    FragTrap character3("Bob");
	
    std::cout << std::endl;

    character.attack("tom");
    character = character2;
    
    character.beRepaired(50);
    character.attack("tom");
    character.attack("tom");
    character.attack("tom");
    character.highFivesGuys();
    std::cout << std::endl;
}