/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:27:17 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/09 15:45:23 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "--------CONSTRUCTOR--------\n\n";
    Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();
    WrongAnimal* meta2 = new WrongAnimal();
	WrongAnimal* k = new WrongCat();
	
	std::cout << "\n--------TYPE--------\n\n";
	
	std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
	
	std::cout << "\n--------SOUND--------\n\n";
	
	std::cout << "Dog : ";
	j->makeSound();
	std::cout << "Cat : ";
	i->makeSound();
	std::cout << "Animal : ";
	meta->makeSound();
	std::cout << "WrongAnimal : ";
	meta2->makeSound();
	std::cout << "WrongCat : ";
	k->makeSound();

	std::cout << "\n--------DESTRUCTOR--------\n\n";
	
	delete meta;
	delete j;
	delete i;
	delete meta2;
	delete k;
    return 0;
}