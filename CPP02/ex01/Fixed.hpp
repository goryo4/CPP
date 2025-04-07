/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 11:01:12 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/03 13:47:42 by ygorget          ###   ########.fr       */
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
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed& a);
		Fixed& operator=(const Fixed& a);
		~Fixed();
		
		int	getRawbits() const;
		void	setRawBits(int const raw);
		
		float toFloat() const;
		int toInt() const;
	};
	
std::ostream& operator<<(std::ostream& out, Fixed& a);

#endif
