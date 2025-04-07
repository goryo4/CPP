/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:29:12 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/28 13:50:23 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class   Dog : public Animal{
    public:
        Dog();
		Dog(const Dog& a);
		Dog& operator=(const Dog& a);
		~Dog();

		void makeSound() const;
};

#endif