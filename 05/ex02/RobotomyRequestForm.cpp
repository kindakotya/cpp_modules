/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 05:37:51 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/18 17:49:23 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() :
	Form("RobotomyRequest", 72, 45), _target("NOT A ROBOT"){}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : 
	Form("RobotomyRequest", 72, 45), _target(target){}


RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & obj) :
	Form("RobotomyRequest", 72, 45), _target(obj._target){}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const & obj){
	_target = obj._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (getExGrade() < executor.getGrade())
		throw GradeTooLowException();
	else if (!isSign())
		throw ExecuteNotSignedFormException();
	else
		std::cout << "Beedo boop bop beeda beep boop lop bleeda bee bop bleeda booop bopp beedlaboop boooopppppp!!!!!! "
			<< _target << " has been robotomized successfully 50%% of the time. FAIL!" 
				<< std::endl;
}
