/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:40:31 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/16 14:28:48 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main()
{
	std::cout << "SHRUBBERY TEST\n";
	
	AForm* rrf;
	try{
		Bureaucrat b1("bob", 1);
		Intern i;

		rrf = i.makeForm("shrubbery creation", "me");

		if (rrf){
			b1.signForm(*rrf);
		}
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	
	}
	if (rrf)
		delete rrf;

	std::cout << "\nROBOTOMY TEST\n";
	
	try{
		Bureaucrat b1("tom", 73);
		Intern i;

		rrf = i.makeForm("robotomy request", "me");
		if (rrf)
			b1.signForm(*rrf);
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	if (rrf)
		delete rrf;
	std::cout << "\nPRESIDENTIAL TEST\n";
	
	try{
		Bureaucrat b1("tom", 26);
		Intern i;

		rrf = i.makeForm("presidential pardon", "me");
		if (rrf)
			b1.signForm(*rrf);
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	if (rrf)
		delete rrf;
	try{
		Bureaucrat b1("tom", 26);
		Intern i;

		rrf = i.makeForm("presidentil pardon", "me");
		if (rrf)
			b1.signForm(*rrf);
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	if (rrf)
		delete rrf;
}