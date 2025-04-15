/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:40:31 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/15 14:41:16 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	std::cout << "SHRUBBERY TEST\n";
	
	try{
		Bureaucrat b1("bob", 150);
		ShrubberyCreationForm s1;

		b1.signForm(s1);
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl;
		Bureaucrat b1("bob", 138);
		Bureaucrat b2(b1);
		ShrubberyCreationForm s1;

		s1.execute(b2);
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl;
		Bureaucrat b1("bob", 145);
		Bureaucrat b2("tom", 150);
		b2 = b1;
		ShrubberyCreationForm s1;

		b2.signForm(s1);
		b2.executeForm(s1);
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl;
		Bureaucrat b1("bob", 137);
		Bureaucrat b2(b1);
		ShrubberyCreationForm s1;

		b2.signForm(s1);
		b2.executeForm(s1);
		s1.execute(b2);
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nROBOTOMY TEST\n";
	
	try{
		Bureaucrat b1("tom", 73);
		RobotomyRequestForm s1;

		b1.signForm(s1);
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl;
		Bureaucrat b1("tom", 72);
		Bureaucrat b2(b1);
		RobotomyRequestForm s1;

		s1.execute(b2);
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl;
		Bureaucrat b1("tom", 46);
		Bureaucrat b2("bob", 150);
		b2 = b1;
		RobotomyRequestForm s1;

		b2.signForm(s1);
		b2.executeForm(s1);
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl;
		Bureaucrat b1("tom", 45);
		Bureaucrat b2(b1);
		RobotomyRequestForm s1;

		b2.signForm(s1);
		b2.executeForm(s1);
		s1.execute(b2);
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}	

	std::cout << "\nPRESIDENTIAL TEST\n";
	
	try{
		Bureaucrat b1("tom", 26);
		PresidentialPardonForm s1;

		b1.signForm(s1);
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl;
		Bureaucrat b1("tom", 25);
		Bureaucrat b2(b1);
		PresidentialPardonForm s1;

		s1.execute(b2);
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl;
		Bureaucrat b1("tom", 25);
		Bureaucrat b2("bob", 150);
		b2 = b1;
		PresidentialPardonForm s1;

		b2.signForm(s1);
		b2.executeForm(s1);
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << std::endl;
		Bureaucrat b1("tom", 5);
		Bureaucrat b2(b1);
		PresidentialPardonForm s1;

		b2.signForm(s1);
		b2.executeForm(s1);
		s1.execute(b2);
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
}