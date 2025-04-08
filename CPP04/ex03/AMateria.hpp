/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:28:12 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/08 16:14:56 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
		AMateria ();
		AMateria(std::string const &type);
		AMateria(AMateria const &m);
		AMateria &operator=(AMateria const &m);
		virtual ~AMateria();

		std::string const &getType()const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif