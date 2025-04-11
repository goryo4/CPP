/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:52:41 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/10 11:37:04 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal(){
    type = "Cat";
    c_Brain = new Brain();
    std::cout << "Default Cat constructor called\n";
}

Cat::Cat(const Cat& a) : Animal(a){
    c_Brain = new Brain(*a.getBrain());
    type = a.getType();
    std::cout << "copy Cat constructor called\n";
}

Cat &Cat::operator=(const Cat& a){
    if (this != &a)
	{
        delete c_Brain;
        c_Brain = new Brain(*a.getBrain());
       	type = a.getType();
    }
	std::cout << "operator Cat constructor called\n";
	return (*this);
}

Brain* Cat::getBrain() const{
    return (c_Brain);
}

void	Cat::makeSound() const{
	std::cout << "Miaou\n";
}

void    Cat::newIdea(int i, std::string idea){
    c_Brain->setIdeas(idea, i);
}

void    Cat::printIdea(int i){
    std::cout << c_Brain->getIdea(i) << std::endl;
}

Cat::~Cat(){
    delete c_Brain;
	std::cout << "Cat destructor called\n";
}