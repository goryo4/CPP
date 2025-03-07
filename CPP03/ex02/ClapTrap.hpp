/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:02:39 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/07 12:14:55 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
    protected:
		std::string Name;
		int	Hit_points;
		int Energy_points;
		int Attack_damage;
    public:
		ClapTrap();
		ClapTrap(ClapTrap& a);
		ClapTrap& operator=(ClapTrap& a);
		ClapTrap(std::string _Name);
		~ClapTrap();
				
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif