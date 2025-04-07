/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:24:59 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/27 15:06:48 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    _name = "Zuu";
    std::cout << "class created" << std::endl;
}

Zombie::Zombie(std::string name)
{
    _name = name;
    std::cout << "class created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << _name << " is destroyed" << std::endl;
}

void    Zombie::announce(void) {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}