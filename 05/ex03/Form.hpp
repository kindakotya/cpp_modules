/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 17:39:43 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/18 17:46:22 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
class Form;
#include "Bureaucrat.hpp"

class Form
{
private:
	std::string const	_name;
	int const			_grade_sig;
	int const			_grade_ex;
	bool				_sign;
public:
	Form();
	Form(std::string const & name, int const grade_sig, int const grade_ex);
	Form(Form const & obj);
	virtual ~Form();

	Form&			operator=(Form const & obj);
	int				getExGrade() const;
	bool			isSign() const;
	void			beSigned(Bureaucrat const & garry);
	std::string		getName() const;
	int				getSigGrade() const;

	virtual void	execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception{
		public: const char* what() const throw() {return "GradeTooHighException (Form)";}
	};
	class GradeTooLowException : public std::exception{
		public: const char* what() const throw() {return "GradeTooLowException (Form)";}
	};
	class ExecuteNotSignedFormException : public std::exception{
		public: const char* what() const throw() {return "ExecuteNotSignedFormException (Form)";}
	};
};

std::ostream&	operator<<(std::ostream & out, Form const & obj);


#endif
