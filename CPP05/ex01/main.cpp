/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:40:31 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/11 15:04:16 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		Bureaucrat b("Tom", 99);
		Form	f;
		
		std::cout << f;
		b.signForm(f);
		std::cout << f;
		std::cout << b;
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception is : " << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowSign& e)
	{
		std::cout << "Exception is : " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat d("Jim", 0);
		std::cout << d;
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception is : " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat c("Sam", 40);
		c.decrementGrade(20);
		c.incrementGrade(100);
		std::cout << c;
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception is : " << e.what() << std::endl;
	}
}