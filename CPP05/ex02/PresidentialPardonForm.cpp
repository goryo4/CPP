/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:35:56 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/14 16:44:15 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : _name("presidential"),  _sign(false), _gradeSign(25), _gradeExec(5){}

PresidentialPardonForm::PresidentialPardonForm(AForm const &f)
	: _name(f.getName()), _sign(f.getSign()), _gradeSign(f.getGradeSign()), _gradeExec(f.getGradeExec()){}

AForm &PresidentialPardonForm::operator=(AForm const &f){
	if (this != &f)
		_sign = f.getSign();
	return *this;
}

std::string	PresidentialPardonForm::getName() const{return _name;}

bool	PresidentialPardonForm::getSign() const {return _sign;}

int	PresidentialPardonForm::getGradeSign() const {return _gradeSign;}

int	PresidentialPardonForm::getGradeExec() const {return _gradeExec;}

void	PresidentialPardonForm::beSigned(Bureaucrat const &b){
	if (b.getGrade() < _gradeSign)
		_sign = true;
	else
	{
		std::cout << b.getName() << " couldn't sign " << getName() << " because ";
		throw GradeTooLowSign();
	}
}