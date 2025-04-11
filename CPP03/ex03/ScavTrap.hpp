/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:35:06 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/09 13:21:36 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
    public:
        ScavTrap();
		ScavTrap(ScavTrap const& a);
		ScavTrap& operator=(ScavTrap const& a);
        ScavTrap(const std::string _Name);
        ~ScavTrap();

        void	attack(const std::string& target);
        void	guardGate();
};

#endif

