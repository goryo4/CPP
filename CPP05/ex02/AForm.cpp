/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:52:58 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/14 15:16:38 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm(): _name("Deal"), _sign(false), _gradeSign(100), _gradeExec(50){}

AForm::AForm(const std::string name, const int gradeSign, const int gradeExec)
    : _name(name), _sign(false), _gradeSign(gradeSign), _gradeExec(gradeExec){
	if (_gradeSign > 150 || _gradeExec > 150)
		throw GradeTooLowExecption();
	else if (_gradeSign < 1 || _gradeExec < 1)
		throw GradeTooHighExecption();
	}

AForm::AForm(AForm const &f)
	: _name(f._name), _sign(f._sign), _gradeSign(f._gradeSign), _gradeExec(f._gradeExec){}

AForm &AForm::operator=(AForm const &f){
	if (this != &f)
		_sign = f._sign;
	return (*this);
}

std::string	AForm::getName() const{return _name;}

bool	AForm::getSign() const {return _sign;}

int	AForm::getGradeSign() const {return _gradeSign;}

int	AForm::getGradeExec() const {return _gradeExec;}

void	AForm::beSigned(Bureaucrat const &b){
	if (b.getGrade() < _gradeSign){
		_sign = true;
	}
	else
	{
		std::cout << b.getName() << " couldn't sign " << getName() << " because ";
		throw GradeTooLowSign();
	}
}

std::ostream& operator<<(std::ostream& os, const AForm& f){
    if (f.getSign()){
		os << f.getName() << ", grade to sign: " << f.getGradeSign() <<  " grade to execute: " 
			<< f.getGradeExec() << " and form is sign" <<std::endl;
	}
    else{
		os << f.getName() << ", grade to sign: " << f.getGradeSign() <<  " grade to execute: "
			 << f.getGradeExec() << " and form is not sign" <<std::endl;
	}
	return (os);
}

AForm::~AForm(){}
