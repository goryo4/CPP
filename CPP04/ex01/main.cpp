/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:27:17 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/07 16:03:18 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	int i = 0;
	std::cout << "--------CONSTRUCTOR--------\n\n";
    Animal* j[100];
	
	while (i < 100)
	{
		if (i % 2 == 0)
			j[i] = new Cat();
		else
			j[i] = new Dog();
		i++;
	}
	
	std::cout << "\n--------DESTRUCTOR--------\n\n";
	
	for (int i = 0; i < 100; ++i)
		delete j[i];
    return 0;
}