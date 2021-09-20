/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 04:45:05 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/18 17:49:01 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <iostream>

class RobotomyRequestForm : public Form
{
private:
	std::string	_target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const & obj);
	RobotomyRequestForm(std::string const & target);
	~RobotomyRequestForm();

	RobotomyRequestForm&	operator=(RobotomyRequestForm const & obj);
	void					execute(Bureaucrat const & executor) const;
};


#endif
