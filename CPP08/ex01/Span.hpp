/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:06:59 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/24 12:22:30 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

# define MAX_UINT 4294967295

class Span
{
    private :
	    std::vector<int> vec;
        unsigned int const _size;
    public :
    	Span();
        Span(unsigned int const N);
		Span(const Span& s);
		Span &operator=(const Span& s);

        ~Span();
		
        void	addNumber(int value);
        unsigned int	shortestSpan();
        unsigned int	longestSpan();
        
        template <typename I>
        void    addNumber(I begin, I end){
            while (begin != end){
                addNumber(*begin);
                begin++;
            }
        }

        class EmptyVector: public std::exception{
			public:
				virtual const char *what() const throw(){
					return "There are fewer than 2 elements in the container\n";
				}
		};

		class fullVector: public std::exception{
			public:
				virtual const char *what() const throw(){
					return "The container is full\n";
				}
		};
};

#endif