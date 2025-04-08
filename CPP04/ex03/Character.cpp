/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolan <yolan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:41:42 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/07 19:15:56 by yolan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character (): _name(""){
	for (int i = 0; i < 4; ++i)
		bag[i] = NULL;
}

Character::Character (std::string const &name): _name(name){
	for (int i = 0; i < 4; ++i)
		bag[i] = NULL;
}

Character::Character (Character const &character): _name(character.getName()){
	for (int i = 0; i < 4; ++i)
	{
		if (character.bag[i])
			bag[i] = character.bag[i]->clone();
		else
			bag[i] = NULL;
	}
}

Character &Character::operator=(Character const &character){
    if (this != &character)
	{
		for (int i = 0; i < 4; ++i)
		{
			delete bag[i];
			if (character.bag[i])
				bag[i] = character.bag[i]->clone();
			else
				bag[i] = NULL;
		}
        _name = character.getName();
	}
    return (*this);
}

std::string const &Character::getName() const{
    return (_name);
}

void    Character::equip(AMateria* m) {
	int i;
	
	i = 0;
    for (; i < 4; ++i)
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
		bag[idx] = NULL;
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

Character::~Character() {
	for (int i = 0; i < 4; ++i){
		delete bag[i];
	}
}