/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 11:07:06 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/03 11:48:10 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void){
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << a.getRawbits() << std::endl;
	std::cout << b.getRawbits() << std::endl;
	std::cout << c.getRawbits() << std::endl;
}