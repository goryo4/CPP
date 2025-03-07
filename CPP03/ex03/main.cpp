/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:09:20 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/07 12:07:18 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void){
    DiamondTrap monster;
    DiamondTrap monster2("to");
    DiamondTrap monster3(monster);
    
    monster.whoAmI();
    
	monster = monster2;
    monster.whoAmI();
    monster2.whoAmI();
    monster3.whoAmI();
    monster3.attack("to");
}