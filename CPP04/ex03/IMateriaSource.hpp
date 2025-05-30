/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:36:35 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/10 12:24:50 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <string>
class AMateria;

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {};
        virtual void learnMateria(AMateria *m) = 0;
        virtual AMateria* createMateria(std::string const &type) = 0;
};

#endif