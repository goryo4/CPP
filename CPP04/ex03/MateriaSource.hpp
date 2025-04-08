/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolan <yolan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:52:08 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/07 19:18:24 by yolan            ###   ########.fr       */
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
        
        AMateria *getMateria() const;
        void learnMateria(AMateria *m);
        AMateria* createMateria(std::string const &type);
};

#endif