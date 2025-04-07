/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:57:20 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/24 17:01:58 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include <sstream>

class Contact {
    private:
        std::string	name;
        std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		void Name();
		void LastName();
		void NickName();
		void PhoneNumber();
		void DarkestSecret();
		void DisplayAllContact(int i);
		void DisplayContact();
};
