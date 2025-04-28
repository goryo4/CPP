/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:39:48 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/28 16:04:04 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
	
double times(timeval start, timeval end)
{
	long seconds = end.tv_sec - start.tv_sec;
    long microseconds = end.tv_usec - start.tv_usec;
    long totalMicroseconds = seconds * 1000000 + microseconds;
	double timeInSeconds = static_cast<double>(totalMicroseconds) / 1000000.0;
	return timeInSeconds;
}

int main(int argc, char **argv){
	if (argc < 2){
		return 0;
	}	
	std::cout << "Before : ";
	for (int i = 1; argv[i]; ++i)
		std::cout << argv[i] << " ";
	std::cout << std::endl;
	PmergeMe test(argv);
	timeval start, end;
	

    gettimeofday(&start, NULL);
	algo(test.getVec());
	gettimeofday(&end, NULL);
	double timeVec = times(start, end);
	

	gettimeofday(&start, NULL);
	algo(test.getDeq());
	gettimeofday(&end, NULL);
	std::cout << "After : ";
	for (std::vector<int>::iterator it = test.getVec().begin(); it != test.getVec().end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "Time to process a range of " << test.getSizeVec() << " elements with std::vector : ";
    std::cout << std::fixed << std::setprecision(5) << timeVec << " us" << std::endl;
	std::cout << "Time to process a range of " << test.getSizeDeq() << " elements with std::vector : ";
	std::cout << std::fixed << std::setprecision(5) << times(start, end) << " us" << std::endl;


}