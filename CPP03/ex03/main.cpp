/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:09:20 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/09 15:25:25 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void){
    DiamondTrap monster;
    DiamondTrap monster2("Sam");
    DiamondTrap monster3(monster);
    
    std::cout << std::endl;
	for (int i = 0; i < 10; ++i){
		monster.attack("to");
		std::cout << i << std::endl;
	}
    monster.whoAmI();
    monster3.attack("to");


    std::cout << std::endl;

}