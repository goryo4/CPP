/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:02:35 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/07 15:22:57 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): materia(){}

MateriaSource::MateriaSource(MateriaSource const &msource): materia(msource.getMateria()){}

MateriaSource &MateriaSource::operator=(MateriaSource const &msource){
    if (this != &msource)
        *materia = msource.getMateria();
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
	
}
