/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:27:17 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/10 12:00:32 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	int i = 0;
	std::cout << "--------CONSTRUCTOR--------\n\n";
    Animal* j[10];
	
	while (i < 10)
	{
		if (i % 2 == 0)
			j[i] = new Cat();
		else
			j[i] = new Dog();
		i++;
	}

	std::cout << "\n--------SOUND--------\n\n";

	for(int i = 0; i < 10; ++i)
		j[i]->makeSound();
	std::cout << "\n--------DESTRUCTOR--------\n\n";
	for (int i = 0; i < 10; ++i)
		delete j[i];

	std::cout << "\n--------IDEA CAT--------\n\n";
	Cat *c = new Cat();
	c->newIdea(0, "hello");
	c->newIdea(1, "bye");
	
	Cat *c1 = new Cat(*c);
	Cat *c2 = new Cat();
	*c2 = *c;
	std::cout << std::endl;

	c->printIdea(0);
	c->printIdea(1);
	c->printIdea(5);
	delete c;
	std::cout << std::endl;

	c1->printIdea(0);
	c2->printIdea(1);

	std::cout << "\n--------IDEA DOG--------\n\n";
	Dog *d = new Dog();
	d->new_idea(0, "hello");
	d->new_idea(1, "bye");
	
	Dog *d1 = new Dog(*d);
	Dog *d2 = new Dog();
	*d2 = *d;
	std::cout << std::endl;

	d->print_idea(0);
	d->print_idea(1);
	d->print_idea(5);
	delete d;
	std::cout << std::endl;

	d1->print_idea(0);
	d2->print_idea(1);

	std::cout << std::endl;
	delete c1;
	delete c2;
	delete d1;
	delete d2;
    return 0;
}