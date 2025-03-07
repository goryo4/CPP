/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:10:02 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/06 15:44:34 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap{
    public:
        FragTrap();
        FragTrap(FragTrap& a);
        FragTrap& operator=(FragTrap& a);
		FragTrap(std::string _Name);
        ~FragTrap();

		int getHit();
		int getAttack();
        
		void	highFivesGuys();
};

#endif