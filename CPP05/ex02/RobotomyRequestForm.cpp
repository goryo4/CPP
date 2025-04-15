/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:44:38 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/15 15:02:20 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("robotomy", 72, 45), _target("home"){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &f)
	:  AForm(f), _target("home"){}

AForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &f){
	if (this != &f){
		AForm::operator=(f);
		_target = f._target;
	}
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (!getSign())
		throw NotSignExecption();
	if (executor.getGrade() <= getGradeExec())
	{
		srand(time(NULL));
		if (rand()%2 == 1)
			std::cout << "Vrrrr... vrrr vrrr... CLAC!...\n" << _target << " has been robotomized successfully 50% of the time\n";
		else
			throw RobotomyFailed();
	}
	else
		throw GradeTooLowSign();
}

RobotomyRequestForm::~RobotomyRequestForm(){}
