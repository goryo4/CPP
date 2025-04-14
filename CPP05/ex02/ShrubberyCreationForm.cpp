/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:46:16 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/14 16:47:10 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : _name("presidential"),  _sign(false), _gradeSign(25), _gradeExec(5){}

ShrubberyCreationForm::ShrubberyCreationForm(AForm const &f)
	: _name(f.getName()), _sign(f.getSign()), _gradeSign(f.getGradeSign()), _gradeExec(f.getGradeExec()){}

AForm &ShrubberyCreationForm::operator=(AForm const &f){
	if (this != &f)
		_sign = f.getSign();
	return *this;
}

std::string	ShrubberyCreationForm::getName() const{return _name;}

bool	ShrubberyCreationForm::getSign() const {return _sign;}

int	ShrubberyCreationForm::getGradeSign() const {return _gradeSign;}

int	ShrubberyCreationForm::getGradeExec() const {return _gradeExec;}

void	ShrubberyCreationForm::beSigned(Bureaucrat const &b){
	if (b.getGrade() < _gradeSign)
		_sign = true;
	else
	{
		std::cout << b.getName() << " couldn't sign " << getName() << " because ";
		throw GradeTooLowSign();
	}
}