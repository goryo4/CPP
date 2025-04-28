/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:45:03 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/28 16:00:22 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(char **tab) {
    for (int i = 1; tab[i]; ++i){
        vec.push_back(atoi(tab[i]));
        deq.push_back(atoi(tab[i]));  
    }
}

PmergeMe::PmergeMe(PmergeMe const &other)
	: vec(other.vec), deq(other.deq) {}

PmergeMe &PmergeMe::operator=(PmergeMe const &other){
	if (this != &other){
		vec = other.vec;
		deq = other.deq;
	}
	return *this;
}

void	PmergeMe::algoVec(){
	std::vector<int> big, small;

	for (size_t i = 0; i + 1 < vec.size(); i += 2){
		if (vec[i] > vec[i + 1]){
			big.push_back(vec[i]);
			small.push_back(vec[i + 1]);
		}
		else{
			big.push_back(vec[i + 1]);
			small.push_back(vec[i]);
		}
	}

	if (vec.size() % 2 != 0)
		big.push_back(vec.back());

	vec = big;
	if (vec.size() > 3)
		algoVec();
	else
		std::sort(vec.begin(), vec.end());	
	for (size_t i = 0; i < small.size(); ++i){
		std::vector<int>::iterator pos = std::lower_bound(vec.begin(), vec.end(), small[i]);
		vec.insert(pos, small[i]);
	}
}


void	PmergeMe::algoDeq(){
	std::deque<int> big, small;

	for (size_t i = 0; i + 1 < deq.size(); i += 2){
		if (deq[i] > deq[i + 1]){
			big.push_back(deq[i]);
			small.push_back(deq[i + 1]);
		}
		else{
			big.push_back(deq[i + 1]);
			small.push_back(deq[i]);
		}
	}

	if (deq.size() % 2 != 0)
		big.push_back(deq.back());

	deq = big;
	if (deq.size() > 3)
		algoDeq();
	else
		std::sort(deq.begin(), deq.end());	
	for (size_t i = 0; i < small.size(); ++i){
		std::deque<int>::iterator pos = std::lower_bound(deq.begin(), deq.end(), small[i]);
		deq.insert(pos, small[i]);
	}
}

size_t	PmergeMe::getSizeVec(){return vec.size();}

size_t	PmergeMe::getSizeDeq(){return deq.size();}

std::vector<int>	&PmergeMe::getVec(){return vec;}

std::deque<int>	&PmergeMe::getDeq(){return deq;}

