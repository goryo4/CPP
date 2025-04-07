/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:44:07 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/27 13:35:51 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    Weapon w = Weapon("sword");
	HumanA Bob(w, "Bob");
	HumanB Jim("Jim");

	std::cout << "\n",
	Bob.attack();
	w.setType("bow");
	Bob.attack();
	std::cout << "\n";


    Weapon bow = Weapon("sword");
	Jim.attack();
	Jim.setWeapon(bow);
	Jim.attack();
	bow.setType("bow");
	Jim.attack();
	std::cout << "\n";
}
