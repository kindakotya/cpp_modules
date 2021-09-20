/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 05:37:03 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/18 17:48:32 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	Form("PresidentialPardon", 25, 5), _target("Ford Prefect"){}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : 
	Form("PresidentialPardon", 25, 5), _target(target){}


PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & obj) :
	Form("PresidentialPardon", 25, 5), _target(obj._target){}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const & obj){
	_target = obj._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (getExGrade() < executor.getGrade())
		throw GradeTooLowException();
	else if (!isSign())
		throw ExecuteNotSignedFormException();
	else
		std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
