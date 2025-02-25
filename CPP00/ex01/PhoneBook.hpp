/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:55:42 by ygorget           #+#    #+#             */
/*   Updated: 2025/02/25 13:46:47 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact	Contact[8];
		int	i;
		int	supp_ct;
	public:
		PhoneBook ();
		void AddContact (const class Contact& ct);
		void	Display();
};

