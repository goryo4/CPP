/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:44:50 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/28 16:00:10 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <sys/time.h>
#include <iomanip>


template<typename Container>
void algo(Container& cont){
	Container big, small;

	typename Container::iterator it = cont.begin();
	while (it != cont.end()){
		typename Container::iterator next = it;
		next++;
		if (next != cont.end())
		{
			if (*it > *next){
				big.push_back(*it);
				small.push_back(*next);
			}
			else{
				big.push_back(*next);
				small.push_back(*it);
			}
			next++;
			it = next;
		}
		else{
			big.push_back(*it);
			break;
		}
	}
	cont = big;
	if (cont.size() > 3)
		algo(cont);
	else
		std::sort(cont.begin(), cont.end());
	for(typename Container::iterator i = small.begin(); i != small.end(); ++i){
		typename Container::iterator pos = std::lower_bound(cont.begin(), cont.end(), *i);
		cont.insert(pos, *i);
	}
}

class PmergeMe
{
    public :
		PmergeMe();
		PmergeMe(char **tab);
		PmergeMe(PmergeMe const &other);
		PmergeMe &operator=(PmergeMe const &other);

		void algoVec();
		void algoDeq();

		size_t getSizeVec();
		size_t getSizeDeq();
		std::vector<int>	&getVec();
		std::deque<int>		&getDeq();

    private :
        std::vector<int> vec;
        std::deque<int> deq;
};

#endif
