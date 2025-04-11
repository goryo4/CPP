/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:26:40 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/11 15:06:20 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
    private :
        const std::string	_name;
		bool				_sign;
		const int			_gradeSign;
		const int			_gradeExec;
	public :
		Form();
		Form(const std::string name, const int _gradeSign, const int _gradeExec);
		Form(Form const &f);
		Form &operator=(Form const &f);

		std::string getName() const;
		bool getSign() const;
		int getGradeSign() const;
		int getGradeExec() const;
		
		void	beSigned(Bureaucrat const &b);
		
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
};

std::ostream& operator<<(std::ostream& os, const Form& f);

#endif