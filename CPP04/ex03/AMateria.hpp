/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:28:12 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/07 15:01:56 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

class AMateria
{
    protected:
        std::string type;
    public:
    AMateria ();
    AMateria(std::string const &type);
    ~AMateria();

    std::string const &getType()const;

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif