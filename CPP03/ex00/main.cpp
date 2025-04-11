/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:09:20 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/09 11:45:48 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
    ClapTrap character;
    ClapTrap character_2("Bob");
    ClapTrap character_3(character_2);
    ClapTrap character_4;
    
    character_4 = character_2;
    
    
    character.attack("mob1");
    character.attack("mob1");
    character.attack("mob1");
    character.attack("mob1");
    character.attack("mob1");
    character.attack("mob1");
    character.attack("mob1");
    character.attack("mob1");
    character.attack("mob1");
    character.beRepaired(2);
    character.attack("mob1");
    
    character.takeDamage(12);
    character.takeDamage(12);
    
}