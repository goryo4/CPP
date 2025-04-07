/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:01:41 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/28 13:28:35 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class   WrongAnimal{
    protected:
        std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& a);
		WrongAnimal& operator=(const WrongAnimal& a);
		 ~WrongAnimal();

		void makeSound();
		const std::string getType() const;
};

#endif