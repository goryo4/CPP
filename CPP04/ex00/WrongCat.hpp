/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:03:18 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/28 13:28:51 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class   WrongCat : public WrongAnimal{
    public:
        WrongCat();
		WrongCat(const WrongCat& a);
		WrongCat& operator=(const WrongCat& a);
		~WrongCat();

		void makeSound();
};

#endif