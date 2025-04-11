/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:40:33 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/11 13:29:13 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include <iostream>

class Bureaucrat
{
    private:
		const std::string	_name;
		int			_grade;
    public:
		Bureaucrat();
		Bureaucrat(std::string const name, int const grade);
		Bureaucrat(Bureaucrat const &b);
		Bureaucrat &operator=(Bureaucrat const &b);
		~Bureaucrat();
		
		std::string	getName() const;
		int	getGrade() const;
		
		void	incrementGrade(int const grade);
		void	decrementGrade(int const grade);
		
		class GradeTooHighExecption : public std::exception{
		public:
			virtual const char *what() const throw(){
					return "Grade is too high";
				}
		};
		
		class GradeTooLowExecption: public std::exception{
		public:
			virtual const char *what() const throw(){
					return "Grade is too low";
				}
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif