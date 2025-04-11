/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:02:39 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/09 11:45:06 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
    private:
		std::string Name;
		int	Hit_points;
		int Energy_points;
		int Attack_damage;
    public:
		ClapTrap();
		ClapTrap(ClapTrap const& a);
		ClapTrap& operator=(ClapTrap const& a);
		ClapTrap(const std::string _Name);
		~ClapTrap();
		
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif