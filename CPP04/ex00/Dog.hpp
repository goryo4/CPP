/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:29:12 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/07 13:37:49 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class   Dog : public Animal{
    public:
        Dog();
		Dog(Dog& a);
		Dog& operator=(Dog& a);
		~Dog();

		void makeSound();
};

#endif