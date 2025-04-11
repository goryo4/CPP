/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:41:42 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/10 12:31:40 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character (): _name(""), floor(NULL), size(0){
	for (int i = 0; i < 4; ++i)
		bag[i] = NULL;
	floor = NULL;
}

Character::Character (std::string const &name): _name(name), floor(NULL), size(0){
	for (int i = 0; i < 4; ++i)
		bag[i] = NULL;
}

Character::Character (Character const &character): _name(character.getName()), size(character.getSize()){
	if (size > 0)
	{
		floor = new AMateria*[size];
		for (int i = 0; i < size; ++i)
			floor[i] = character.floor[i]->clone();
	}
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
		size = character.getSize();
		delete[] floor;
		if (size > 0)
		{
			floor = new AMateria*[size];
			for (int i = 0; i < size; ++i)
				floor[i] = character.floor[i]->clone();
		}
		else
			floor = NULL;
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
    for (int i = 0; i < 4; ++i){
        if(!bag[i]){
			bag[i] = m;
			return ;
		}
	}
	delete m;
	std::cout << "Bag full\n";
}

int	const	&Character::getSize() const{
	return (size);
}

void	Character::unequip(int idx){
	if (idx < 0 || idx > 3)
	{
		std::cout << "it's not good index\n";
		return ;
	}
	if (bag[idx])
	{
		AMateria** tmp = new AMateria*[this->getSize() + 1];
		for (int i = 0; i < this->getSize(); ++i){
			tmp[i] = floor[i];
		}
		tmp[size] = bag[idx];
		delete[] floor;
		floor = tmp;
		size++;
		bag[idx] = NULL;
	}
	else
		std::cout << "there has not materia in bag with this index\n";
}

void	Character::use(int idx, ICharacter& target){
	if (idx < 0 || idx > 3)
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
		bag[i] = NULL;
	}
	for (int i = 0; i < size; ++i){
		delete floor[i];
	}
	delete[] floor;
}