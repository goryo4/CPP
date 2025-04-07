/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:55:42 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/27 11:21:06 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact	Contact[8];
		int	i;
		int	supp_ct;
		int	GoodIndex(std::string num, int i);
	public:
		PhoneBook ();
		void AddContact (const class Contact& ct);
		int	Display();
};

