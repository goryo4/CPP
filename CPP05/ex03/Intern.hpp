/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:49:36 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/15 15:08:21 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern
{
	private :
		std::string form[3];
    public :
		Intern();
		Intern(Intern const &i);
		Intern &operator=(Intern const &i);
		~Intern();
		
		AForm *makeForm(std::string nameForm, std::string target);		
};

#endif