/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:24:26 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/27 12:03:09 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie z;
    Zombie* horde_z;
    long int i = 0;
    std::string nbr;
    std::string Z_name;
    
    std::cout << "number of zombies\n";
    std::cin >> nbr;
    std::stringstream(nbr) >> i;
    if (i < 0 || i > 100000)
    {
		  std::cout << "it's wrong number" << std::endl;
		  return (0);
	  }
    std::cout << "names\n";
    std::cin >> Z_name;
    horde_z = z.zombieHorde(i, Z_name);
    for (int j = 0; j < i; ++j)
		  horde_z[j].announce();
	delete [] horde_z;
}