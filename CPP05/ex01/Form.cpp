/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:52:58 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/11 15:06:26 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(): _name("Deal"), _sign(false), _gradeSign(100), _gradeExec(50){}

Form::Form(const std::string name, const int gradeSign, const int gradeExec)
    : _name(name), _sign(false), _gradeSign(gradeSign), _gradeExec(gradeExec){
	if (_gradeSign > 150 || _gradeExec > 150)
		throw GradeTooLowExecption();
	else if (_gradeSign < 1 || _gradeExec < 1)
		throw GradeTooHighExecption();
	}

Form::Form(Form const &f)
	: _name(f._name), _sign(f._sign), _gradeSign(f._gradeSign), _gradeExec(f._gradeExec){}

Form &Form::operator=(Form const &f){
	if (this != &f)
		_sign = f._sign;
	return (*this);
}

std::string	Form::getName() const{return _name;}

bool	Form::getSign() const {return _sign;}

int	Form::getGradeSign() const {return _gradeSign;}

int	Form::getGradeExec() const {return _gradeExec;}

void	Form::beSigned(Bureaucrat const &b){
	if (b.getGrade() < _gradeSign){
		_sign = true;
	}
}

std::ostream& operator<<(std::ostream& os, const Form& f){
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

