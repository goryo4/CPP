/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:35:06 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/06 15:47:05 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
    public:
        ScavTrap();
		ScavTrap(ScavTrap& a);
		ScavTrap& operator=(ScavTrap& a);
        ScavTrap(std::string _Name);
        ~ScavTrap();

		int getEnergy();

        void	attack(const std::string& target);
        void	guardGate();
};

#endif

