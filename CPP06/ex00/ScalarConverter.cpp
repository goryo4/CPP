/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:31:43 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/18 15:32:36 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cfloat>
#include <climits>

int	impossible(void)
{
	std::cout << "char : impossible\n" 
				"int  : impossible\n"
				"float : impossible\n"
				"double : impossible\n";
	return (1);
}

int	good_string(std::string &str)
{
	int digit = 0;
	int point = 0;
	int sig = 0;
	int i = 0;
	
	if (str.length() == 1)
		return (0);
	for (int i = 0; str[i] && digit != 1; ++i){
		if (isdigit(str[i]))
			digit++;
	}
	if (digit == 1){
		for (; str[i + 1]; ++i){
			if (!isdigit(str[i]) && str[i] != '.' && str[i] != '-')
				return (impossible());
			if (str[i] == '.'){
				point++;
			}
			if (str[i] == '-' || str[i] == '+'){
				sig++;
			}
		}
	}
	else
		return (impossible());
	if (sig > 1 || point > 1 || (str[i] != 'f' && !isdigit(str[i])))
		return (impossible());
	return 0;
}

int	exceptionConv(std::string &str)
{
	if (str == "-inf" || str == "+inf" || str == "nan")
	{
		std::cout << "char : impossible\n" 
				"int  : impossible\n"
				"float : " << str << "f\n"
				"double : " << str << std::endl;
		return (1);
	}
	if (str == "-inff" || str == "+inff" || str == "nanf")
	{
		std::cout << "char : impossible\n" 
				"int  : impossible\n"
				"float : " << str << std::endl <<
				"double : " << str.substr(0, str.length() - 1) << std::endl;
		return (1);
	}
	return (0);
}

void	isCharacter(std::string &str)
{
	char	c;
	double	db;
	float	fl;
	int		num;
	
	c = static_cast<char>(str[0]);
	num = static_cast<int>(c);
	fl = static_cast<float>(c);
	db = static_cast<double>(c);
	if (isprint(static_cast<int>(c)))
		std::cout << "char : " << static_cast<char>(c) << std::endl;
	else
		std::cout << "char : Non displayable" << std::endl;	
	std::cout << "int : " << num << std::endl;
	std::cout << "float : " << fl << ".0f" << std::endl;
	std::cout << "double : " << db << ".0" << std::endl;
}

void	printChar(long double conv)
{
	char	c;

	c = static_cast<char>(conv);
	if (isprint(static_cast<int>(c)))
		std::cout << "char : " << c << std::endl;
	else if (conv >= 0 && conv <= 255)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : impossible" << std::endl;
}

void	printInt(long double conv)
{
	int		num;

	num = static_cast<int>(conv);
	if (conv >= INT_MIN && conv <= INT_MAX)
		std::cout << "int : " << num << std::endl;
	else
		std::cout << "int : impossible" << std::endl;
}

void	printFloat(long double conv, int point)
{
	float	fl;
	
	fl = static_cast<float>(conv);
	if (conv < -FLT_MAX)
		std::cout << "float : " << fl << "f" << std::endl;
	else if (conv < 2147483647 && point == -1)
		std::cout << "float : " << fl << ".0f" << std::endl;
	else if (fl < 2147483648 && point != -1)
		std::cout << "float : " << fl << "f" << std::endl;
	else if (conv >= -FLT_MAX && conv <= FLT_MAX && point == -1)
		std::cout << "float : " << conv << ".0f" << std::endl;
	else if (conv >= -FLT_MAX && conv <= FLT_MAX && point != -1)
		std::cout << "float : " << conv << "f" << std::endl;
	else
		std::cout << "float : +" << fl << "f" << std::endl;
}

void	printDouble(long double conv, int point, std::string str)
{
	double	db;

	db = static_cast<double>(conv);
	if (conv >= -DBL_MAX && conv <= DBL_MAX && point == -1)
		std::cout << "double : " << db << ".0" << std::endl;
	else if (conv >= -DBL_MAX && conv <= DBL_MAX && point != -1)
		std::cout << "double : " << db << std::endl;
	else if (str[0] != '-')
		std::cout << "double : +" << db << std::endl;
	else
		std::cout << "double : " << db << std::endl;
}

void    ScalarConverter::convert(std::string &str){
	long double		conv;
	int point;
	int	neg;

	point = -1;
	neg = 0;

	if (exceptionConv(str) == 1)
		return ;
	if (str[0] == '-')
		neg++;
	if (good_string(str) == 1)
		return ;
	if (str.length() == 1 && !isdigit(str[0])){
		isCharacter(str);
		return ;
	}
	else {
		std::stringstream ss(str);
		ss >> conv;
	}
	int i = 0;
	for (; str[i]; ++i){
		if (str[i] == '.')
			point = i;
	}
	if (point != -1 && str[0] != '.')
		std::cout << std::fixed << std::setprecision(i - point - 1);
	else if (point != -1){
		std::cout << std::fixed << std::setprecision(i - 1);
	}
	else
		std::cout << std::fixed << std::setprecision(0);
	printChar(conv);
	printInt(conv);
	printFloat(conv, point);
	printDouble(conv, point, str);
}
