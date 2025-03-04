/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 11:07:06 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/04 15:54:33 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void){
	Point M(4, 6);
	Point V(100, 60.5);
	Point A(1, 2);
	Point B(3, 5);
	Point C(7, 8);
	
	if (bsp(A, B, C, M))
		std::cout << "Point M is in triangle ABC\n";
	else
		std::cout << "Point M isn't in triangle ABC\n";

	if (bsp(A, B, C, V))
	{
		std::cout << "Point V is in triangle ABC\n";
		return (1);
	}
	std::cout << "Point V isn't in triangle ABC\n";
	return (0);	
}