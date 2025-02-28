/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:10:34 by ygorget           #+#    #+#             */
/*   Updated: 2025/02/28 15:16:33 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl h;
	
	if (argc != 2)
	{
		std::cout << "i would 1 argument\n";
		return (1);
	}
	h.complain(argv[1]);
	return (0);
}