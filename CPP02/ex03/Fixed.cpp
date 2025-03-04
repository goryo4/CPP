/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 11:10:51 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/04 14:43:18 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (){
	nbr = 0;
	//std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& a){
	nbr = a.getRawbits();
	//std::cout << "Copy constructor called\n";
}

Fixed::Fixed(int nb){
	nbr = nb * (1 << _fix);
	//std::cout << "int constructor called\n";
}

Fixed::Fixed(float nb){
	nbr = static_cast<int>(roundf(nb * (1 << _fix)));
	//std::cout << "float constructor called\n";
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

bool	Fixed::operator>(const Fixed& a) const{
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

bool	Fixed::operator<(const Fixed& a) const{
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
	if (nbr <= a.getRawbits())
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

Fixed	Fixed::operator+(Fixed a) const{
	return Fixed(toFloat() + a.toFloat());
}

Fixed	Fixed::operator-(Fixed a) const{
	return Fixed(toFloat() - a.toFloat());
}

Fixed	Fixed::operator*(Fixed a) const{
	return Fixed(toFloat() * a.toFloat());
}

Fixed	Fixed::operator/(Fixed a) const{
	return Fixed(toFloat() / a.toFloat());
}

Fixed	&Fixed::operator++(){
	nbr++;
	return *this;
}

Fixed	&Fixed::operator--(){
	nbr--;
	return *this;
}

Fixed	Fixed::operator++(int){
	Fixed e = *this;
	nbr++;
	return e;
}

Fixed	Fixed::operator--(int){
	Fixed e = *this;
	nbr--;
	return e;
}

Fixed Fixed::max(Fixed& a, Fixed& b){
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed Fixed::max(const Fixed& a, const Fixed& b){
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed Fixed::min(Fixed& a, Fixed& b){
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed Fixed::min(const Fixed& a, const Fixed& b){
	if (a < b)
		return (a);
	else
		return (b);
}

std::ostream& Fixed::display(std::ostream& out) const{
	out << toFloat();
	return (out);
}

std::ostream& operator<<(std::ostream& out, const Fixed& a){
	return a.display(out);
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
	//std::cout << "Destructor called\n";
}