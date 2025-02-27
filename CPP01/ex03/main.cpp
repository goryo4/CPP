/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:44:07 by ygorget           #+#    #+#             */
/*   Updated: 2025/02/27 14:03:57 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    Weapon w("sword");
	HumanA human_a(w, "Bob");
	HumanB human_b("Jim");

	human_a.attack();
	human_b.attack();

	w.setType("bow");
	human_b.weapon = w;
	human_a.attack();
	human_b.attack();

}
