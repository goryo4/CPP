/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:11:26 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/27 15:08:00 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
		
int main(void)
{
    Zombie z;
    Zombie* z1;

    std::cout << "name standart\n";
    z.announce();
    
    std::cout << "\nnew zombie\n";
    z1 = newZombie("Foo");
    z1->announce();

    std::cout << "\nrandom zombie\n";
    randomChump("Suu");
    
	delete z1;
}