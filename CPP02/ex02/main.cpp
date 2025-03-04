/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 11:07:06 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/04 12:40:26 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void){
	Fixed a;
	Fixed b(Fixed (5.05f) + Fixed(2));
	Fixed c(Fixed (5.05f) - Fixed(2));
	Fixed d(Fixed (5.05f) * Fixed(2));
	Fixed e(Fixed (5.05f) / Fixed(2));
	const Fixed f(8.06f);
	const Fixed g(10.8f);

	std::cout << "\ncompar\n" << std::endl;

	if (a > b)
		std::cout << "a > b" << std::endl;
	if (a < b)
		std::cout << "a < b" << std::endl;
	if (a >= b)
		std::cout << "a >= b" << std::endl;
	if (a <= b)
		std::cout << "a <= b" << std::endl;
	if (a == b)
		std::cout << "a == b" << std::endl;
	if (a != b)
		std::cout << "a != b" << std::endl;
	
	std::cout << "\noperation +, -, *, /\n" << std::endl;
	
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;

	std::cout << "\noperation post and pre\n" << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;

	std::cout << "\nmax and min\n" << std::endl;
	
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::max(f, g) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << Fixed::min(f, g) << std::endl;
	
}