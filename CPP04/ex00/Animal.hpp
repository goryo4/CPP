/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:27:38 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/28 13:49:51 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class   Animal{
    protected:
        std::string type;
	public:
		Animal();
		Animal(const Animal& a);
		Animal& operator=(const Animal& a);
		virtual ~Animal();

		virtual void makeSound() const;
		const std::string getType() const;
};

#endif