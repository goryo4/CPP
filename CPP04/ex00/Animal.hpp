/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:27:38 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/07 13:36:55 by ygorget          ###   ########.fr       */
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
		Animal(Animal& a);
		Animal& operator=(Animal& a);
		virtual ~Animal();

		virtual void makeSound();
		std::string getType();
};

#endif