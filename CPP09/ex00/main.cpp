/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:25:52 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/25 14:17:14 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char** argv)
{
	(void)argv;
    if (argc < 2){
		std::cout << "I need 1 argument\n";
		return (0);
	}

	std::ifstream infile("data.csv");
	BitcoinExchange bitcoin(infile);
	
	bitcoin.createList(argv[1]);
	return (0);
}