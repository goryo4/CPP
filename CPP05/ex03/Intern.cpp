/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:03:05 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/15 15:19:12 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}
   
Intern::Intern(Intern const &i){}

Intern &Intern::operator=(Intern const &i) {return *this;}

AForm *Intern::makeForm(std::string nameForm, std::string target){
	std::string form[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	int i = 0;
	for (; i < 3; ++i)
		if (form[i] == nameForm)
			break ;
	switch (i)
	{
		case 0:
			std::cout << "Intern creates shrubbery creation\n";
			return new ShrubberyCreationForm(target);		
		case 1:
			std::cout << "Intern creates robotomy request\n";
			return new RobotomyRequestForm(target);
		case 2:
			std::cout << "Intern creates presidential pardon\n";
			return new PresidentialPardonForm(target);
		default:
			std::cerr << "Intern couldn't find the form: " << nameForm << "\n";
			return NULL;
	}
}		
