/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:45:45 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/07 15:07:14 by ygorget          ###   ########.fr       */
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
		Cat(Cat& a);
		Cat& operator=(Cat& a);
		~Cat();

		void makeSound();
};

#endif