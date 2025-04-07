/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:34:55 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/27 17:08:58 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void){
	std::cout << "did you have a good level ?\n";
}

void	Harl::info(void){
	std::cout << "i would level between : debug | info | warning | error\n";
}

void	Harl::warning(void){
	std::cout << "attention, the agument can to be wrong\n";
}

void	Harl::error(void){
	std::cout << "there are an error\n";
}

void    Harl::complain(std::string level){	
	std::string _level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int i;
	for (i = 0; i < 4; ++i)
		if (_level[i] == level)
			break ;
	switch (i)
	{
		case 0:
			Harl::debug();
		case 1:
			Harl::info();
		case 2:
			Harl::warning();
		case 3:
			Harl::error();
			break;
		default:
			std::cout << "wrong level\n";
	}
	return ;
}

Harl::Harl(){
	std::cout << "Harl created\n";
}

Harl::~Harl(){
	std::cout << "Harl destroyed\n";
}