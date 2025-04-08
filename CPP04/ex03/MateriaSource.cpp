/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolan <yolan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:02:35 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/07 18:58:14 by yolan            ###   ########.fr       */
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

AMateria *MateriaSource::getMateria() const{
	return (*materia);
}

void	MateriaSource::learnMateria(AMateria *m){
	static int i = 0;

	if (i > 3)
	{
		std::cout << "i can't more materia\n";
		return ;
	}
	materia[i] = m;
	i++;
}

AMateria *MateriaSource::createMateria(std::string const &type){
	int i = 0;

	for (; materia[i]; ++i)
		if (materia[i]->getType() == type)
			break ;
	if (i > 3 || !materia[i])
		return 0;
	return (materia[i]);
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; ++i)
        delete materia[i];
}