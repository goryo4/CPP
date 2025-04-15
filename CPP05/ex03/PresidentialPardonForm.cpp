/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:35:56 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/15 15:22:54 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("Presidential", 25, 5), _target("home"){}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
	: AForm("Presidential", 25, 5), _target(target){}
	
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &f)
	: AForm(f), _target("home"){}


AForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &f){
	if (this != &f){
		AForm::operator=(f);
		_target = f._target;
	}
	return *this;
}                     

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (!getSign())
		throw NotSignExecption();
	if (executor.getGrade() <= getGradeExec())
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox\n";
	else
		throw GradeTooLowSign();
}

PresidentialPardonForm::~PresidentialPardonForm(){}
