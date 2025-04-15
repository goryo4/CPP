/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:30:23 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/15 15:22:04 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private :
		std::string	_target;
	public :
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &f);
		AForm &operator=(RobotomyRequestForm const &f);
		~RobotomyRequestForm();
		
		void	execute(Bureaucrat const &executor) const;

	class RobotomyFailed: public std::exception{
	public:
		virtual const char *what() const throw(){
				return "robotomized failed 50% of the time";
			}
	};
};

#endif
