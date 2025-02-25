/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:55:56 by ygorget           #+#    #+#             */
/*   Updated: 2025/02/25 15:09:54 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){   i = 0;}

void    PhoneBook::AddContact(const class Contact& ct)
{
	if (i == 0)
		supp_ct = 0;
	if (i == 8)
	{
		Contact[supp_ct] = ct;
		if (supp_ct < 8)
			supp_ct++;
		else
			supp_ct = 0;
	}
	else
	{
		Contact[i] = ct;
		i++;
	}
    return ;
}

int	GoodIndex(std::string num, int i)
{
	if (num == "1" && i >= 1)
		return (1);
	if (num == "2" && i >= 2)
		return (1);
	if (num == "3" && i >= 3)
		return (1);
	if (num == "4" && i >= 4)
		return (1);
	if (num == "5" && i >= 5)
		return (1);
	if (num == "6" && i >= 6)
		return (1);
	if (num == "7" && i >= 7)
		return (1);
	if (num == "8" && i == 8)
		return (1);
	return (0);
}

void PhoneBook::Display(void){
	std::string num;
	int j = -1;
	
	if (i == 0)
		return ;
    while (++j < i)
		Contact[j].DisplayAllContact(j + 1);
	while (GoodIndex(num, i) == 0)
	{
		std::cout << "chosen up to the index " << i << std::endl;
		std::cin >> num;
	}
	std::stringstream(num) >> j;
	Contact[j - 1].DisplayContact();
}