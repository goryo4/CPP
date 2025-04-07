/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 11:10:51 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/03 14:41:22 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (): nbr(0){
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed& a): nbr(a.getRawbits()){
	std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(const Fixed& a){
	std::cout << "Copy operator constructor called\n";
	if(this != &a)
		nbr = a.getRawbits();
	return (*this);
}

int	Fixed::getRawbits() const{
	return (nbr);
}

void	Fixed::setRawBits(int const raw){
	nbr = raw * (1 << fix);
}

Fixed::~Fixed (){
	std::cout << "Destructor called\n";
}