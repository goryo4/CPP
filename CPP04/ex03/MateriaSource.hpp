/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:52:08 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/08 12:47:08 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* materia[4];
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &msource);
        MateriaSource &operator=(MateriaSource const &msource);
        ~MateriaSource();
        
        void learnMateria(AMateria *m);
        AMateria* createMateria(std::string const &type);
};

#endif