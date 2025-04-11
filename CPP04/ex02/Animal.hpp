/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:27:38 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/10 11:39:16 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class   Animal{
    protected:
        std::string type;
	public:
		Animal() ;
		Animal(Animal const &a);
		Animal& operator=(Animal const &a);
		virtual ~Animal();

		virtual void makeSound() const = 0;
		virtual std::string getType() const;
};

#endif