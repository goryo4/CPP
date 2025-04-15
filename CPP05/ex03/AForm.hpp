/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:26:40 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/15 13:06:26 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class AForm
{
    private :
        const std::string	_name;
		bool				_sign;
		const int			_gradeSign;
		const int			_gradeExec;
	public :
		AForm();
		AForm(const std::string name, const int _gradeSign, const int _gradeExec);
		AForm(AForm const &f);
		AForm &operator=(AForm const &f);
		virtual ~AForm();

		std::string getName() const;
		bool getSign() const;
		int getGradeSign() const;
		int getGradeExec() const;
		
		void	beSigned(Bureaucrat const &b);
		virtual void	execute(Bureaucrat const &executor) const = 0;
		
		class GradeTooHighExecption : public std::exception{
		public:
			virtual const char *what() const throw(){
					return "Grade is too high to sign the form";
				}
		};
			
		class GradeTooLowExecption: public std::exception{
		public:
			virtual const char *what() const throw(){
					return "Grade is too low to sign the form";
				}
		};

		class GradeTooLowSign: public std::exception{
		public:
			virtual const char *what() const throw(){
					return "Grade is too low to sign the form";
				}
		};
		class NotSignExecption: public std::exception{
		public:
			virtual const char *what() const throw(){
					return "the form is not signed";
				}
		};
};

std::ostream& operator<<(std::ostream& os, const AForm& f);

#endif