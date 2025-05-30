/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:10:34 by ygorget           #+#    #+#             */
/*   Updated: 2025/02/28 14:38:52 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl h;
	
	std::cout << "\ntest level debug\n";
	h.complain("DEBUG");

	std::cout << "\ntest level info\n";
	h.complain("INFO");

	std::cout << "\ntest level warning\n";
	h.complain("WARNING");

	std::cout << "\ntest level error\n";
	h.complain("ERROR");

	std::cout << "\ntest with a wrong level\n";
	h.complain("DEFAULT");
	return (0);
}