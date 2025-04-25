/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:12:47 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/23 16:18:26 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;

	try
	{
		sp.addNumber(-2147483648);
		sp.addNumber(2147483647);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;

	try
	{
		for(int i = 0; i < 10; ++i)
			sp.addNumber(i);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;
	
	std::vector<int> test;

	for(int i = 0; i < 100000; ++i)
		test.push_back(i);
	try
	{
		Span s(20);
		
		std::vector<int>::iterator begin = test.begin() + 50;
		std::vector<int>::iterator end = test.begin() + 70;
		s.addNumber(begin, end);
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;

	try
	{
		Span s(100000);
		
		std::vector<int>::iterator begin = test.begin();
		std::vector<int>::iterator end = test.end();
		s.addNumber(begin, end);
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}
	return 0;
}