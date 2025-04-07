/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:47:29 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/27 11:33:55 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::Name(void){
    std::cout << "Enter your Name" << std::endl;
    std::cin >> name;
    return ;
}

void Contact::LastName(void){
    std::cout << "Enter your Last name" << std::endl;
    std::cin >> last_name;
    return ;
}

void Contact::NickName(void){
    std::cout << "Enter your nickname" << std::endl;
    std::cin >> nickname;
    return ;
}

void Contact::PhoneNumber(void){
    std::cout << "Enter your phone number" << std::endl;
    std::cin >> phone_number;
    return ;
}

void Contact::DarkestSecret(void){
    std::cout << "Enter your darkest secret" << std::endl;
    std::cin >> darkest_secret;
    return ;
}

void Contact::DisplayAllContact(int i){
	std::string first = name;
	std::string second = last_name;
	std::string third = nickname;
	size_t len;
	
	std::cout << "        " << i << "|";
	if (first.length() > 10)
	{
		first.erase(9);
		std::cout << first << "." << "|";
	}
	else
	{
		len = 10 - first.length();
		for (size_t j = 0; j < len; ++j)
			std::cout << " ";
		std::cout << first;
		std::cout << "|";
	}
	if (second.length() > 10)
	{
		second.erase(9);
		std::cout << second << "." << "|";
	}
	else
	{
		len = 10 - second.length();
		for (size_t j = 0; j < len; ++j)
			std::cout << " ";
		std::cout << second;
		std::cout << "|";
	}
	if (third.length() > 10)
	{
		third.erase(9);
		std::cout << third << "." << std::endl;
	}
	else
	{
		len = 10 - third.length();
		for (size_t j = 0; j < len; ++j)
			std::cout << " ";
		std::cout << third;
		std::cout << std::endl;
	}
}

void	Contact::DisplayContact(void){
    std::cout << "name is " << name << std::endl;
    std::cout << "lastname is " << last_name << std::endl;
    std::cout << "nickname is " << nickname << std::endl;
    std::cout << "phone number is " << phone_number << std::endl;
    std::cout << "darkest secret is " << darkest_secret << std::endl;
}