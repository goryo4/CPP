/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 11:01:12 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/04 12:38:55 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int nbr;
        static const int _fix = 8;
	public:
		Fixed();
		Fixed(const Fixed& a);
		Fixed(const int nb);
		Fixed(const float nb);
		~Fixed();
		
		int	getRawbits() const;
		void	setRawBits(int const raw);
		
		float toFloat() const;
		int toInt() const;

		bool operator>(Fixed& a) const;
		bool operator>(const Fixed& a) const;
		bool operator<(Fixed& a) const;
		bool operator<(const Fixed& a) const;
		bool operator>=(Fixed& a) const;
		bool operator<=(Fixed& a) const;
		bool operator==(Fixed& a) const;
		bool operator!=(Fixed& a) const;

		Fixed operator+(Fixed a) const;
		Fixed operator-(Fixed a) const;
		Fixed operator*(Fixed a) const;
		Fixed operator/(Fixed a) const;
		
		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		
		static Fixed max(Fixed& a, Fixed& b);
		static Fixed max(const Fixed& a, const Fixed& b);
		static Fixed min(Fixed& a, Fixed& b);
		static Fixed min(const Fixed& a, const Fixed& b);
		
		
		std::ostream& display(std::ostream& out) const;
	};
	
std::ostream& operator<<(std::ostream& out, const Fixed& a);

#endif
