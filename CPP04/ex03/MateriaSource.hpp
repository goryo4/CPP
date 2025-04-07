/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:52:08 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/07 15:19:58 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"

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