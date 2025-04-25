/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:44:11 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/25 15:58:13 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& other): _stack(other._stack) {}

RPN& RPN::operator=(const RPN& other){
    if (this != &other){
        _stack = other._stack;
    }
	return *this;
}

bool    isSign(char c){
    if (c == '+' || c == '-' || c == '/' || c == '*')
        return true;
	else
		return false;
}

bool	goodString(const char *str){
	for (int i = 1; str[i]; ++i){
		if (!isdigit(str[i]) && str[i] != ' ' && !isSign(str[i]))
			return false;
		if (isdigit(str[i]) && (str[i + 1] == '\0' || isdigit(str[i + 1]) || str[i + 1] != ' '))
			return false
		if (str[i] == ' ' && isdigit(str[i - 1]) && str)
	}
}
void    RPN::algo(const char *str){
	if (goodString(str))
		retunr ;
    for (int i = 0; str[i]; ++i){
		while (str[i] == ' ')
			i++;
		if (isdigit(str[i]))
			_stack.push(str[i] - '0');
		else if (isSign(str[i])){
			int num1 = _stack.top();
			_stack.pop();
			int num2 = _stack.top();
			_stack.pop();
			switch (str[i])
			{
				case '+':
					_stack.push(num2 + num1);
					break;
				case '-':
					_stack.push(num2 - num1);
					break;
				case '/':
					_stack.push(num2 / num1);
					break;
				case '*':
					_stack.push(num2 * num1);
					break;
			}
		}
	}
	std::cout << _stack.top() << std::endl;
}
