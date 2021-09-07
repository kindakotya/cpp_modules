/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 02:04:41 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/07 05:58:16 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>


Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name){
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat() : _name("Garry"), _grade(150) {}

Bureaucrat::Bureaucrat(Bureaucrat const & obj)
	: _name(obj.getName()), _grade(obj.getGrade()) {}

Bureaucrat	Bureaucrat::operator=(Bureaucrat const & obj){
	return Bureaucrat(obj);
}

Bureaucrat::~Bureaucrat(){}

std::string	Bureaucrat::getName() const {return _name;}

int			Bureaucrat::getGrade() const {return _grade;}

void		Bureaucrat::signForm(Form & form) const{
	if (form.isSign())
		std::cout << form << " is already signed.";
	else{
		try{
			form.beSigned(*this);
			std::cout << *this << " signs Form" << form.getName() << '.';
		}
		catch (std::exception & e){
			std::cout << *this << " can't sign Form" << form.getName() 
				<< " because his grade is lower then Forms sign grade " 
					<< form.getSigGrade() << '.';
		}
	}
	std::cout << std::endl;
}

void	Bureaucrat::executeForm(Form const & form) const{
	try{
		std::cout << *this << " tries to execute Form"
				<< form.getName() << '.' << std::endl;
		form.execute(*this);
		std::cout << "Done.";
	}
	catch (std::exception & e){
		std::cout << *this << " can't sign Form" << form.getName() 
				<< " because ";
		if (!strcmp(e.what(),"GradeTooLowException (Form)"))
			std::cout << "his grade is lower then Forms execute grade "
					<< form.getExGrade() << '.';
		else
			std::cout << "form is not signed.";
	}
	std::cout << std::endl;
}

Bureaucrat&	Bureaucrat::operator++(){
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	--_grade;
	return *this;
}

Bureaucrat&	Bureaucrat::operator--(){
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	++_grade;
	return *this;
}

std::ostream&	operator<<(std::ostream & out, Bureaucrat const & obj)
{
	out << "Mr." << obj.getName() << " with " << obj.getGrade() << " grade";
	return out;
}
