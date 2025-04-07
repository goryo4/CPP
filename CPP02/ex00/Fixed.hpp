/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 11:01:12 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/27 14:28:15 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int nbr;
        static const int fix = 8;
	public:
		Fixed();
		Fixed(Fixed& a);
		Fixed& operator=(const Fixed& a);
		~Fixed();

		int	getRawbits() const;
		void	setRawBits(int const raw);
};

#endif
