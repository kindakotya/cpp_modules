/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 19:33:57 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/07 19:57:42 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
public:
	Intern();
	// Intern(Intern const & obj);
	// Intern	operator=(Intern const & obj);
	~Intern();

	Form*	makeForm(std::string const & form_type, std::string const & target) const;
};

Intern::Intern(){}

// Intern::Intern(Intern const & obj){}

Intern::~Intern(){}

// Intern	Intern::operator=(Intern const & obj){}

Form*	Intern::makeForm(std::string const & form_type, std::string const & target) const{
	if (form_type == "presidential pardon")
		return new PresidentialPardonForm(target);
	else if (form_type == "shrubbery creation")
		return new ShrubberyCreationForm(target);
	else if (form_type == "robotomy request")
		return new RobotomyRequestForm(target);
	return NULL;
}

#endif
