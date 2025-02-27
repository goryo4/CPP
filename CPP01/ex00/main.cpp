/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:11:26 by ygorget           #+#    #+#             */
/*   Updated: 2025/02/26 14:04:56 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	announce(void);

Zombie* newZombie(std::string name);

void	randomChump(std::string name);
		
int main(void)
{
    Zombie z;
    Zombie* z1;

    z1 = z.newZombie("foo");
    z1->announce();
    z.randomChump("suu");
    
	delete z1;
}