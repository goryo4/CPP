/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:28:05 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/25 14:46:33 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <list>
#include <fstream>
#include <sstream>

class BitcoinExchange
{
    private :
        std::list<std::string> _file;

		bool    goodDate(std::string line);
		bool	goodString(std::string line);
		bool	isDatePassed(std::string line, std::list<std::string>::iterator it);
		void	valueBitcoin(std::list<std::string>::iterator it, std::string line);
    public :
		BitcoinExchange();
		BitcoinExchange(std::ifstream& infile);
		BitcoinExchange(const BitcoinExchange& bitcoin);
		BitcoinExchange &operator=(const BitcoinExchange& bitcoin);
		~BitcoinExchange();
		
		void	printList();
		void	createList(char *file);
};

#endif
