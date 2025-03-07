/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:26:16 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/07 11:28:30 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
    private:
        std::string	Name;
	public:
		DiamondTrap();
		DiamondTrap(std::string _Name);
		DiamondTrap(DiamondTrap& a);
		DiamondTrap& operator=(DiamondTrap& a);
		
		void	whoAmI();
};

#endif