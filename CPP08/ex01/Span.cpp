/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:13:43 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/24 12:37:39 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int const N): _size(N){}

Span::Span(const Span& s): vec(s.vec), _size(s._size){}

Span &Span::operator=(const Span& s){
	if (this != &s){
		*this = s;
	}
	return *this;
}

void    Span::addNumber(int value){
	if (vec.size() == _size)
		throw fullVector();
	vec.push_back(value);
}

unsigned int	Span::shortestSpan(){
	unsigned int	shortest = MAX_UINT;

	if(vec.size() <= 1)
		throw EmptyVector();
	
	std::vector<int> tmp = vec;
	std::sort(tmp.begin(), tmp.end());

    for (unsigned int i = 0; i < tmp.size() - 1; ++i){
			long diff = static_cast<long>(tmp[i + 1]) - static_cast<long>(tmp[i]);
			if ( diff < shortest)
				shortest = diff;
	}
	return shortest;
}

unsigned int	Span::longestSpan(){
	if(vec.size() <= 1)
		throw EmptyVector();
	int min = *std::min_element(vec.begin(), vec.end());
	int max = *std::max_element(vec.begin(), vec.end());
	return static_cast<unsigned int>(max - min);
}

Span::~Span(){}