/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:29:12 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/28 15:16:58 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class   Dog : public Animal{
	private:
		Brain *d_Brain;
	public:
        Dog();
		Dog(const Dog& a);
		Dog& operator=(const Dog& a);
		~Dog();

		Brain* getBrain() const;
		void	new_idea(int i, std::string idea);
		void	print_idea(int i);
		void makeSound() const;
};

#endif