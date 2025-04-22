/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:13:43 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/22 16:26:14 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int const N): _size(N){}

void    Span::addNumber(int value){
    unsigned int size = vec.size();

	if (size == _size)
		throw ;
	vec.push_back(value);
}

unsigned int	Span::shortestSpan(){
	unsigned int size = vec.size();
	unsigned int	shortest = 4294967294;
	unsigned int i;
	unsigned int count = 1;

	if (size <= 1)
		throw ;
    for (std::vector<int>::iterator it =  vec.begin(); it != vec.end(); ++it){
		i = count;
		while (i < vec.size())
		{
			if ((unsigned int)((*it - vec[i] < 0) ? -(*it - vec[i]) : (*it - vec[i])) < shortest)
				shortest = ((*it - vec[i] < 0) ? -(*it - vec[i]) : (*it - vec[i]));
			i++;
		}
		count++;
	}
	return shortest;
}

unsigned int	Span::longestSpan(){
	unsigned int size = vec.size();
	int	longest = 0;
	unsigned int i = 1;
	
	if (size <= 1)
		throw ;
    for (std::vector<int>::iterator it =  vec.begin(); it != vec.end(); ++it){
		i = 1;
		while (i < vec.size())
		{
			if (((*it - vec[i] < 0) ? -(*it - vec[i]) : (*it - vec[i]))  > longest)
				longest = ((*it - vec[i] < 0) ? -(*it - vec[i]) : (*it - vec[i]));
			i++;
		}
	}
	return longest;
}

Span::~Span(){}