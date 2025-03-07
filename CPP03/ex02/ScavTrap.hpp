/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:35:06 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/06 15:13:45 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap();
		ScavTrap(ScavTrap& a);
		ScavTrap& operator=(ScavTrap& a);
        ScavTrap(std::string _Name);
        ~ScavTrap();

        void	attack(const std::string& target);
        void	guardGate();
};

#endif

