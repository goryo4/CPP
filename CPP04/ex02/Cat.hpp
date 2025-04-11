/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:45:45 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/10 11:33:53 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class   Cat : public Animal{
	private:
		Brain *c_Brain;
	public:
        Cat();
		Cat(const Cat& a);
		Cat& operator=(const Cat& a);
		~Cat();

		Brain* getBrain() const;
		void	newIdea(int i, std::string idea);
		void	printIdea(int i);
		void makeSound() const;
};

#endif