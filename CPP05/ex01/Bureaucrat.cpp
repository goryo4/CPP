/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:40:35 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/14 15:10:35 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(): _name("unnamed"), _grade(75){}

Bureaucrat::Bureaucrat(std::string const name, int const grade)
	: _name(name), _grade(grade){
    if (_grade > 150)
		throw GradeTooLowExecption();
	else if (_grade < 1)
		throw GradeTooHighExecption();
    }
	
Bureaucrat::Bureaucrat(Bureaucrat const &b): _name(b._name), _grade(b._grade){
	if (_grade > 150)
		throw GradeTooLowExecption();
	else if (_grade < 1)
		throw GradeTooHighExecption();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &b){
	if (this != &b){
		_grade = b._grade;
	}
	if (_grade > 150)
		throw GradeTooLowExecption();
	else if (_grade < 1)
		throw GradeTooHighExecption();
    return (*this);
}

std::string	Bureaucrat::getName() const{return _name;}

int	Bureaucrat::getGrade() const{return _grade;}

void	Bureaucrat::signForm(Form &f){
	f.beSigned(*this);
	if (f.getSign()){
		std::cout << _name << " sign " << f.getName() << std::endl;
	}
	else{
		std::cout << _name << " couldn't sign " << f.getName() << " because grade too low\n";
		throw Form::GradeTooLowExecption();
	}
}

void	Bureaucrat::incrementGrade(int const grade){
	_grade += grade;
	if (_grade > 150)
		throw GradeTooHighExecption();
	else if (_grade < 1)
		throw GradeTooLowExecption();
}

void	Bureaucrat::decrementGrade(int const grade){
	_grade -= grade;
	if (_grade > 150)
		throw GradeTooHighExecption();
	else if (_grade < 1)
		throw GradeTooLowExecption();
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b){
    os << b.getName() << ", grade: " << b.getGrade() << std::endl;
    return (os);
}

Bureaucrat::~Bureaucrat(){}