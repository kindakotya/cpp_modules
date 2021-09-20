/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 01:10:38 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/19 19:35:22 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
class Bureaucrat;
# include "Form.hpp"


class Bureaucrat
{
private:
	std::string	const	_name;
	int					_grade;
public:
	Bureaucrat();
	Bureaucrat(Bureaucrat const & obj);
	Bureaucrat(std::string const & name, int grade);
	~Bureaucrat();
	Bureaucrat&	operator=(Bureaucrat const & obj);

	std::string	getName() const;
	int			getGrade() const;
	void		signForm(Form & form) const;
	Bureaucrat&	increment();
	Bureaucrat& decrement();
	Bureaucrat&	operator++();
	Bureaucrat&	operator--();

	class GradeTooHighException : public std::exception{
		public: const char* what() const throw() {return "GradeTooHighException (Bureaucrat)";}
	};
	class GradeTooLowException : public std::exception{
		public: const char* what() const throw() {return "GradeTooLowException (Bureaucrat)";}
	};
};

std::ostream&	operator<<(std::ostream & out, Bureaucrat const & obj);


#endif
