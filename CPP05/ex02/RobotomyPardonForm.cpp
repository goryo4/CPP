/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyPardonForm.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:44:38 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/14 16:45:54 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : _name("presidential"),  _sign(false), _gradeSign(25), _gradeExec(5){}

RobotomyRequestForm::RobotomyRequestForm(AForm const &f)
	: _name(f.getName()), _sign(f.getSign()), _gradeSign(f.getGradeSign()), _gradeExec(f.getGradeExec()){}

AForm &RobotomyRequestForm::operator=(AForm const &f){
	if (this != &f)
		_sign = f.getSign();
	return *this;
}

std::string	RobotomyRequestForm::getName() const{return _name;}

bool	RobotomyRequestForm::getSign() const {return _sign;}

int	RobotomyRequestForm::getGradeSign() const {return _gradeSign;}

int	RobotomyRequestForm::getGradeExec() const {return _gradeExec;}

void	RobotomyRequestForm::beSigned(Bureaucrat const &b){
	if (b.getGrade() < _gradeSign)
		_sign = true;
	else
	{
		std::cout << b.getName() << " couldn't sign " << getName() << " because ";
		throw GradeTooLowSign();
	}
}
