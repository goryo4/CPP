/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:18:48 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/14 15:51:32 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
    	const std::string	_name;
    	bool				_sign;
    	const int			_gradeSign;
    	const int			_gradeExec;
	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(AForm const &f);
		AForm &operator=(AForm const &f);
		
		std::string getName() const;
		bool getSign() const;
		int getGradeSign() const;
		int getGradeExec() const;

		void	beSigned(Bureaucrat const &b);
};

#endif