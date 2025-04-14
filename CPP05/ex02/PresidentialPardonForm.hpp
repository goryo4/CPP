/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:33:08 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/14 15:51:19 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private :
		const std::string	_name;
		bool				_sign;
		const int			_gradeSign;
		const int			_gradeExec;
    public :
		PresidentialPardonForm();
		PresidentialPardonForm(AForm const &f);
		AForm &operator=(AForm const &f);

		std::string getName() const;
		bool getSign() const;
		int getGradeSign() const;
		int getGradeExec() const;

		void	beSigned(Bureaucrat const &b);
};

#endif