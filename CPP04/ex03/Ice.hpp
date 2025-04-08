/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:48:14 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/08 16:30:22 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public :
        Ice ();
		Ice(std::string const &type);
        Ice (AMateria const &m);
        AMateria &operator=(AMateria const &m);
        ~Ice ();
        
		AMateria* clone() const;
		void	use(ICharacter& target);
};

#endif