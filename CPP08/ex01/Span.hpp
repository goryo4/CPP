/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:06:59 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/22 15:21:25 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
    private :
	    std::vector<int> vec;
        unsigned int const _size;
    public :
        Span(unsigned int const N);
        ~Span();
		
        void	addNumber(int value);
        unsigned int	shortestSpan();
        unsigned int	longestSpan();
};

#endif