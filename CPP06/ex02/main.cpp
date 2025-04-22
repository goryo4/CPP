/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:32:06 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/22 12:00:55 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <time.h>
#include <cstdlib>

Base *generate(){
    int i;

	srand(time(NULL));
	i = rand()%3;

	switch (i)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
	return NULL;
}

void    identify(Base *p){
    A* a = dynamic_cast<A*>(p);
	B* b = dynamic_cast<B*>(p);
	C* c = dynamic_cast<C*>(p);
	
	if (a)
		std::cout << "the object pointed to by p: A\n";
	else if (b)
		std::cout << "the object pointed to by p: B\n";
	else if (c)
		std::cout << "the object pointed to by p: C\n";
	else
		std::cout << "Unknow type\n";
}

void identify(Base &p){
	try
	{
		(void)dynamic_cast<A&>(p);
		
		std::cout << "the actual type of the object referenced by p: A\n";
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		(void)dynamic_cast<B&>(p);
		
		std::cout << "the actual type of the object referenced by p: B\n";
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		(void)dynamic_cast<C&>(p);
		
		std::cout << "the actual type of the object referenced by p: C\n";
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}


int main(){
    Base* p = NULL;
	
	identify(p);

	p = generate();

	identify(*p);
	identify(p);

	delete p;
	return 0;
}