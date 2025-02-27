/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:39:59 by ygorget           #+#    #+#             */
/*   Updated: 2025/02/27 11:22:41 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name){
	Zombie* horde_z = new Zombie[N];
	while (N > 0)
	{
		horde_z[N - 1]._name = name;
		N--;
	}
	return (horde_z);
}
