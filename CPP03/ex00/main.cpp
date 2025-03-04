/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:09:20 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/04 16:33:44 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
    ClapTrap character("Bob", 10, 10, 0);
    
    character.attack("mob1");
    character.beRepaired(2);
    character.attack("mob1");
    character.attack("mob1");
    character.attack("mob1");
    character.attack("mob1");
    character.attack("mob1");
    character.attack("mob1");
    character.attack("mob1");
    character.attack("mob1");
    character.attack("mob1");
    character.attack("mob1");
    character.attack("mob1");
    character.attack("mob1");
    
}