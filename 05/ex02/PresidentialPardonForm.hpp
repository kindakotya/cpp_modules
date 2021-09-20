/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 03:12:55 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/18 17:47:00 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include <iostream>

class PresidentialPardonForm : public Form
{
private:
	std::string	_target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const & obj);
	PresidentialPardonForm(std::string const & target);
	~PresidentialPardonForm();

	PresidentialPardonForm&	operator=(PresidentialPardonForm const & obj);
	void		execute(Bureaucrat const & executor) const;
};


#endif
