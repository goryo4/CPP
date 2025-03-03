/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 11:10:51 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/03 17:40:45 by ygorget          ###   ########.fr       */
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



bool	Fixed::operator>(Fixed& a) const{
	if (nbr > a.getRawbits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(Fixed& a) const{
	if (nbr < a.getRawbits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(Fixed& a) const{
	if (nbr >= a.getRawbits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(Fixed& a) const{
	if (nbr > a.getRawbits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(Fixed& a) const{
	if (nbr == a.getRawbits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(Fixed& a) const{
	if (nbr != a.getRawbits())
		return (true);
	else
		return (false);
}

Fixed	Fixed::operator+(Fixed& a) const{
	return (nbr + a.getRawbits());
}

Fixed	Fixed::operator-(Fixed& a) const{
	return (nbr - a.getRawbits());
}

Fixed	Fixed::operator*(Fixed a) const{
	Fixed b = Fixed(static_cast<float>(roundf(nbr / (1 << _fix))));
	Fixed c = Fixed(static_cast<float>(roundf(a.getRawbits() / (1 << _fix))));
	Fixed d = b.getRawbits() * c.getRawbits();
	std::cout << "fix = " << b.getRawbits() << std::endl;
	std::cout << "fix = " << c.getRawbits() << std::endl;
	std::cout << "* = " << d.toFloat() << std::endl;
	

	return Fixed(static_cast<float>(roundf(nbr / (1 << _fix)) * static_cast<float>(roundf(a.getRawbits() / (1 << _fix)))));
}

Fixed	Fixed::operator/(Fixed& a) const{
	return (nbr / a.getRawbits());
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