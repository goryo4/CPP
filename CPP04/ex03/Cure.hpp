/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:54:19 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/08 16:30:15 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public :
        Cure ();
		Cure(std::string const &type);
        Cure (AMateria const &m);
        AMateria &operator=(AMateria const &m);
        ~Cure ();
        
		AMateria* clone() const;
		void	use(ICharacter& target);
};

#endif