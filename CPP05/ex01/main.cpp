/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:40:31 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/14 15:04:05 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		Bureaucrat b("Tom", 101);
		Form	f;
		
		b.signForm(f);
	}
	catch (const Form::GradeTooHighExecption& e)
	{
		std::cout << "Exception is : " << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowExecption& e)
	{
		std::cout << "Exception is : " << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowSign& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat d("Jim", 1);
		Form	f2("form 2", 10, 5);

		std::cout << f2;
		d.signForm(f2);
		std::cout << d;
		std::cout << f2;
	}
	catch (const Form::GradeTooHighExecption& e)
	{
		std::cout << "Exception is : " << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowExecption& e)
	{
		std::cout << "Exception is : " << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowSign& e)
	{
		std::cout << e.what() << std::endl;
	}
}