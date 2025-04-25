/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:03:57 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/24 13:02:40 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>


template <typename T>
class MutantStack : public std::stack<T>
{
    public :
		MutantStack(){};
		MutantStack(const MutantStack& M): std::stack<T>(M){};
		MutantStack& operator=(const MutantStack& M){
			if (this != &M){
				std::stack<T>::operator=(M);
			}
			return *this;
		};
		~MutantStack(){};

	typedef typename std::stack<T>::container_type::iterator iterator;
	
	iterator begin() {
        return this->c.begin();
    }

    iterator end() {
        return this->c.end();
    }		
};

#endif