/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:41:42 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/07 14:51:50 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character (): _name(""), bag(){}

Character::Character (std::string const &name): _name(name), bag(){}

Character::Character (Character const &character): _name(character.getName()){}

Character &Character::operator=(Character const &character){
    if (this != &character)
        _name = character.getName();
    return (*this);
}

std::string const &Character::getName() const{
    return (_name);
}

void    Character::equip(AMateria* m) {
	int i = 0;
	
    for (bag[i] && i < 4; ++i;)
        if(bag[i] == NULL)
            break ;
    if (i == 4)
	{	
		std::cout << "Bag full\n";
		return ;
	}
	bag[i] = m;
}

void	Character::unequip(int idx){
	if (idx > 3)
	{
		std::cout << "it's not good index\n";
		return ;
	}
	if (bag[idx])
		bag[idx] == NULL;
	else
		std::cout << "there has not materia in bag with this index\n";
}

void	Character::use(int idx, ICharacter& target){
	if (idx > 3)
	{
		std::cout << "it's not good index\n";
		return ;
	}
	if (bag[idx])
		bag[idx]->use(target);
	else
		std::cout << "there has not materia in bag with this index\n";
}

Character::~Character() {}