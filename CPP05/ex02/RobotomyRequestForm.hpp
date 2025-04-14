/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:30:23 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/14 15:51:07 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private :
        const std::string	_name;
    	bool				_sign;
    	const int			_gradeSign;
    	const int			_gradeExec;
	public :
		RobotomyRequestForm();
		RobotomyRequestForm(AForm const &f);
		AForm &operator=(AForm const &f);
	
		std::string getName() const;
		bool getSign() const;
		int getGradeSign() const;
		int getGradeExec() const;

		void	beSigned(Bureaucrat const &b);
};

#endif
