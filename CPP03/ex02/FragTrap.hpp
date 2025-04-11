/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:10:02 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/09 12:26:24 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap{
    public:
        FragTrap();
        FragTrap(FragTrap const & a);
        FragTrap& operator=(FragTrap const & a);
		FragTrap(const std::string _Name);
        ~FragTrap();

		void	highFivesGuys();
};

#endif