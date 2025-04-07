/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:09:31 by ygorget           #+#    #+#             */
/*   Updated: 2025/02/27 14:00:17 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon();
    	Weapon(std::string type);
    	~Weapon();

		const std::string&	getType() const;
		void	setType(std::string new_type);
};

#endif

