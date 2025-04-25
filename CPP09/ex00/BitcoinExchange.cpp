/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:09:50 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/25 16:05:17 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(std::ifstream& infile){
    std::string line;
    
    while(getline(infile, line)){
        _file.push_back(line);
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& bitcoin)
    : _file(bitcoin._file){}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange& bitcoin){
    if (this != &bitcoin){
        _file = bitcoin._file;
    }
    return *this;
}

void BitcoinExchange::printList(){
    for (std::list<std::string>::iterator it = _file.begin(); it != _file.end(); ++it)
        std::cout << *it << std::endl;
}

bool    BitcoinExchange::goodDate(std::string line){
	int year = 0;
	int	 month = 0;
	int	day = 0;
	
	if (!isdigit(line[0]) || line[4] != '-' || line[7] != '-')
		return false;
	for (int i = 0; i < 4; ++i){
		if (!isdigit(line[i]))
			return false;
		year = year * 10 + (line[i] - '0');
	}
	for (int i = 5; i < 7; ++i){
		if (!isdigit(line[i]))
			return false;
		month = month * 10 + (line[i] - '0');
	}
	if (month > 12)
		return false;
	for (int i = 8; i < 10; ++i){
		if (!isdigit(line[i]))
			return false;
		day = day * 10 + (line[i] - '0');
	}
	if (day > 31
		|| (day == 31 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11 ))
		|| (day == 30 && month == 2)
		|| (day == 29 && month == 2 && ((year % 4 != 0) || (year % 4 == 0 && year % 100 == 0 && year % 400 != 0))))
		return false;
	return true;
}

bool	BitcoinExchange::goodString(std::string line){
	if (!goodDate(line)){
		std::cerr << "Error: bad input -> " << line << std::endl;
		return false;
	}
	if (line.size() < 13){
		std::cerr << "Error: bad input -> " << line << std::endl;
		return false;
	}
	
	std::string value = line.substr(13, line.size());
	long double conv;
	std::stringstream ss(value);
	ss >> conv;

	if (conv < 0 || conv > 1000){
		if (conv < 0)
			std::cerr << "Error: not a positive number." << std::endl;
		else
			std::cerr << "Error: too large a number." << std::endl;
		return false;
	}
	if (line[10] != ' ' && line[12] != ' ' && line[11] != '|'){
		std::cerr << "Error: bad input -> " << line << std::endl;
		return false;
	}
	return true;
}

bool	BitcoinExchange::isDatePassed(std::string line, std::list<std::string>::iterator it)
{				
	std::string dateInput = line.substr(0, 4);
	std::string dateFile = it->substr(0, 4);
	
	if (dateInput > dateFile)
		return false;
		
	dateInput = line.substr(5, 2);
	dateFile = it->substr(5, 2);
	
	if (dateInput > dateFile)
		return false;

	dateInput = line.substr(8, 2);
	dateFile = it->substr(8, 2);

	if (dateInput >= dateFile)
		return false;

	return true;
}

void	BitcoinExchange::valueBitcoin(std::list<std::string>::iterator it, std::string line){
	std::string valueInput = line.substr(13, line.size());
	std::string valueFile = it->substr(11, it->size());
	long double conv;
	long double conv2;

	std::stringstream ss(valueInput);
	ss >> conv;
	std::stringstream ss2(valueFile);
	ss2 >> conv2;
	
	std::cout << conv * conv2 << std::endl;
}

void    BitcoinExchange::createList(char *input){
    std::ifstream file(input);
    std::string line;
	
    while(getline(file, line)){
        if (goodString(line)){
            std::cout << line.substr(0, 10) << " -> " << line.substr(13, line.size()) << " = ";
			std::list<std::string>::iterator it = _file.begin();
			++it;
			for(; it != _file.end(); ++it){
				if (isDatePassed(line, it))
					break ;
			}
			--it;
			valueBitcoin(it, line);
        }
    }
}
