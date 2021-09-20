/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 19:22:33 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/20 03:25:09 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

Intern::Intern(){}

Intern::Intern(Intern const & obj){(void)obj;}

Intern::~Intern(){}

Intern&	Intern::operator=(Intern const & obj){
	(void)obj;
	return *this;
}

Form*	Intern::makePresidentialPardonForm(std::string const & target) const{
	return new PresidentialPardonForm(target);
}

Form*	Intern::makeShrubberyCreationForm(std::string const & target) const{
	return new ShrubberyCreationForm(target);
}

Form*	Intern::makeRobotomyRequestForm(std::string const & target) const{
	return new RobotomyRequestForm(target);
}

Form*	Intern::makeForm(std::string const & form_type, std::string const & target) const{
	Form *(Intern::*func[4])(std::string const & target) const = {	
								&Intern::makePresidentialPardonForm,
								&Intern::makeShrubberyCreationForm,
								&Intern::makeRobotomyRequestForm};
	std::string	types[3] =		{"presidential pardon",
								"shrubbery creation",
								"robotomy request"};
	for (int i = 0; i < 4; i++){
		if (form_type == types[i]){
			std::cout << "Intern creates " << form_type << " form." << std::endl;
			return (this->*func[i])(target);
		}
	}
	return NULL;
}
