/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:30:50 by ygorget           #+#    #+#             */
/*   Updated: 2025/02/27 11:15:21 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
    _name = "ree";
    std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie(void){
    std::cout << "Zombie destroyed" << std::endl;
}

void	Zombie::announce(void){
	std::cout << "name is " <<_name <<  std::endl;
}
