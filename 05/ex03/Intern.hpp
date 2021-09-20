/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 19:33:57 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/20 03:14:15 by gmayweat         ###   ########.fr       */
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
private:
	Form*	makePresidentialPardonForm(std::string const & target) const;
	Form*	makeShrubberyCreationForm(std::string const & target) const;
	Form*	makeRobotomyRequestForm(std::string const & target) const;
public:
	Intern(Intern const & obj);
	Intern&	operator=(Intern const & obj);
	Intern();
	~Intern();

	Form*	makeForm(std::string const & form_type, std::string const & target) const;
};


#endif
