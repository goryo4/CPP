/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:02:35 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/10 11:57:02 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; ++i)
		materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &msource){
	for (int i = 0; i < 4; ++i)
	{
		if (msource.materia[i])
			materia[i] = msource.materia[i]->clone();
		else
			materia[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &msource){
    if (this != &msource)
    {
		for (int i = 0; i < 4; ++i)
		{
			delete materia[i];
			if (msource.materia[i])
				materia[i] = msource.materia[i]->clone();
			else
				materia[i] = NULL;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m){
	if (!m)
		std::cout << "m is NULL\n";
	for (int i = 0; i < 4; ++i){
		if (!materia[i]){
			materia[i] = m->clone();
			return ;
		}
	}
	std::cout << "it's full\n";
}

AMateria *MateriaSource::createMateria(std::string const &type){
	for (int i = 0;i < 4 ; ++i){
		if (materia[i] && materia[i]->getType() == type)
			return (materia[i]->clone());
		}
	return 0;
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; ++i){
		delete materia[i];
		materia[i] = NULL;
	}
}