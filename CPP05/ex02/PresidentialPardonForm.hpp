/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:33:08 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/15 15:02:11 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private :
		std::string	_target;
    public :
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &f);
		AForm &operator=(PresidentialPardonForm const &f);
		~PresidentialPardonForm();

		void	execute(Bureaucrat const &executor) const;
};

#endif