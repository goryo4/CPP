/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:40:03 by ygorget           #+#    #+#             */
/*   Updated: 2025/02/25 15:54:43 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	Contact ct;
	PhoneBook pb;
    std::string cmd;
	
    while (1)
    {
		std::cin >> cmd;
		if (std::cin.eof())
			break ;
		if (cmd == "ADD")
		{
			ct.Contact::Name();
			ct.Contact::LastName();
			ct.Contact::NickName();
			ct.Contact::PhoneNumber();
			ct.Contact::DarkestSecret();
			pb.PhoneBook::AddContact(ct);
		}
		else if (cmd == "SEARCH")
			pb.Display();
		else if (cmd == "EXIT")
			break ;
	}
    return (0);
}