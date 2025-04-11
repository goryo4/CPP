/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:56:02 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/10 11:36:43 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal(){
    type = "Dog";
    d_Brain = new Brain();
    std::cout << "Default Dog constructor called\n";
}

Dog::Dog(const Dog& a) : Animal(a){
    d_Brain = new Brain(*a.getBrain());
    type = a.getType();
    std::cout << "copy Dog constructor called\n";
}

Dog &Dog::operator=(const Dog& a){
    if (this != &a)
	{
        delete d_Brain;
        d_Brain = new Brain(*a.getBrain());
        type = a.getType();
    }
	std::cout << "operator Dog constructor called\n";
	return (*this);
}

Brain* Dog::getBrain() const{
    return (d_Brain);
}

void	Dog::makeSound() const{
	std::cout << "Woof\n";
}

void    Dog::new_idea(int i, std::string idea){
    d_Brain->setIdeas(idea, i);
}

void    Dog::print_idea(int i){
    std::cout << d_Brain->getIdea(i) << std::endl;
}

Dog::~Dog(){
    delete d_Brain;
	std::cout << "Dog tor called\n";
}