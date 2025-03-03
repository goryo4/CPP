/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 11:10:51 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/03 16:50:09 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (){
	nbr = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& a){
	nbr = a.getRawbits();
	std::cout << "Copy constructor called\n";
}

Fixed::Fixed(int nb){
	nbr = nb * (1 << _fix);
	std::cout << "int constructor called\n";
}

Fixed::Fixed(float nb){
	nbr = static_cast<int>(roundf(nb * (1 << _fix)));
	std::cout << "float constructor called\n";
}

float	Fixed::toFloat(void) const{
	return static_cast<float>(nbr) / (1 << _fix);
}

std::ostream& operator<<(std::ostream& out, Fixed& a){
	out << a.toFloat();
	return (out);
}

int	Fixed::toInt() const{
	return (nbr / (1 << _fix));
}

int	Fixed::getRawbits() const{
	return (nbr);
}

void	Fixed::setRawBits(int const raw){
	nbr = raw * (1 << _fix);
}

Fixed::~Fixed (){
	std::cout << "Destructor called\n";
}