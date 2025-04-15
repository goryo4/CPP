/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:46:16 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/15 15:21:55 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("shrubbery", 145, 137), _target("home"){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
	: AForm("shrubbery", 145, 137), _target(target){}


ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &f)
	: AForm(f), _target("home"){}


AForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &f){
	if (this != &f){
		AForm::operator=(f);
		_target = f._target;
	}
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	std::string filename = _target + "_shrubbery";
	
	if (!getSign())
		throw NotSignExecption();
	if (executor.getGrade() <= getGradeExec()){
		std::ofstream outfile(filename.c_str());
		outfile <<
		"              * *\n"
		"           *    *  *\n"
		"      *  *    *     *  *\n"
		"     *     *    *  *    *\n"
		" * *   *    *    *    *   *\n"
		" *     *  *    * * .#  *   *\n"
		" *   *     * #.  .# *   *\n"
		"  *     \"#.  #: #\" * *    *\n"
		" *   * * \"#. ##\"       *\n"
		"   *       \"###\n"
		"             \"##\n"
		"              ##.\n"
		"              .##:\n"
		"              :###\n"
		"              ;###\n"
		"            ,####.\n"
		"/\\/\\/\\/\\/\\/.######.\\/\\/\\/\\/\\\n";
		outfile.close();
	}
	else
		throw GradeTooLowSign();
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}
