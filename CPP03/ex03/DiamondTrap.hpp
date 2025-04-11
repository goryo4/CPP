/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:26:16 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/09 13:41:45 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
    private:
        std::string	Name;
	public:
		DiamondTrap();
		DiamondTrap(const std::string _Name);
		DiamondTrap(DiamondTrap const& a);
		DiamondTrap& operator=(DiamondTrap const& a);
		
		void	attack(const std::string &target);
		void	whoAmI() const;
};

#endif