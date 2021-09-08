/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 18:13:47 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/06 04:08:35 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form() : _name("00"), _grade_sig(150), _grade_ex(150), _sign(false) {}

Form::Form(std::string const & name, int const grade_sig, int const grade_ex) :
_name(name), _grade_sig(grade_sig), _grade_ex(grade_ex), _sign(false)
{
	if (grade_sig > 150 || grade_ex > 150)
		throw GradeTooLowException();
	else if (grade_sig < 1 || grade_ex < 1)
		throw GradeTooHighException();
}

Form::Form(Form const & obj) :
_name(obj.getName()), _grade_sig(obj.getSigGrade()), _grade_ex(obj.getExGrade()), _sign(obj.isSign())
{
	if (obj.getSigGrade() > 150 || obj.getExGrade() > 150)
		throw GradeTooLowException();
	else if (obj.getSigGrade() < 1 || obj.getExGrade() < 1)
		throw GradeTooHighException();
}

Form::~Form() {}

std::ostream&	operator<<(std::ostream & out, Form const & obj){
	out << "Form" << obj.getName() << " with " << obj.getSigGrade()
		<< " sign grade and " << obj.getExGrade() << " execute grade. ";
	if (obj.isSign())
		out << "Signed.";
	else
		out << "Not signed.";
	return out;
}

std::string	Form::getName() const{return _name;}

int	Form::getSigGrade() const{return _grade_sig;}

int	Form::getExGrade() const{return _grade_ex;}

bool	Form::isSign() const{return _sign;}

void	Form::beSigned(Bureaucrat const & garry){
	if (garry.getGrade() > _grade_sig)
		throw GradeTooLowException();
	else
		_sign = true;
}
