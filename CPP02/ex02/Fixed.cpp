/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 11:10:51 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/03 14:47:09 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (){
	nbr = 0;
	//std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& a): nbr(a.getRawbits()){
	//std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(const Fixed& a){
	//std::cout << "Copy operator constructor called\n";
	if(this != &a)
		nbr = a.getRawbits();
	return (*this);
}

Fixed::Fixed(int nb): nbr(nb * (1 << _fix)){
	//std::cout << "int constructor called\n";
}

Fixed::Fixed(float nb): nbr(static_cast<int>(roundf(nb * (1 << _fix)))){
	//std::cout << "float constructor called\n";
}

float	Fixed::toFloat(void) const{
	return static_cast<float>(nbr) / (1 << _fix);
}

bool	Fixed::operator>(const Fixed& a) const{
	return ((nbr > a.getRawbits()) ? true : false);
}

bool	Fixed::operator<(const Fixed& a) const{
	return ((nbr < a.getRawbits()) ? true : false);
}

bool	Fixed::operator>=(const Fixed& a) const{
	return ((nbr >= a.getRawbits()) ? true : false);
}

bool	Fixed::operator<=(const Fixed& a) const{
	return ((nbr <= a.getRawbits()) ? true : false);
}

bool	Fixed::operator==(const Fixed& a) const{
	return ((nbr == a.getRawbits()) ? true : false);
}

bool	Fixed::operator!=(const Fixed& a) const{
	return ((nbr != a.getRawbits()) ? true : false);
}

Fixed	Fixed::operator+(const Fixed a) const{
	return Fixed(toFloat() + a.toFloat());
}

Fixed	Fixed::operator-(const Fixed a) const{
	return Fixed(toFloat() - a.toFloat());
}

Fixed	Fixed::operator*(const Fixed a) const{
	return Fixed(toFloat() * a.toFloat());
}

Fixed	Fixed::operator/(const Fixed a) const{
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
	return ((a > b) ? a : b);
}

Fixed Fixed::max(const Fixed& a, const Fixed& b){
	return ((a.getRawbits() > b.getRawbits()) ? a : b);
}

Fixed Fixed::min(Fixed& a, Fixed& b){
	return ((a < b) ? a : b);
}

Fixed Fixed::min(const Fixed& a, const Fixed& b){
	return ((a.getRawbits() < b.getRawbits()) ? a : b);
}

std::ostream& operator<<(std::ostream& out, const Fixed& a){
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
	//std::cout << "Destructor called\n";
}