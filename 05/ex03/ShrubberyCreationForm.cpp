/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 05:38:26 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/07 06:26:04 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() :
	Form("ShrubberyCreation", 145, 137), _target("Pr.Elcin"){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : 
	Form("ShrubberyCreation", 145, 137), _target(target){}


ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & obj) :
	Form("ShrubberyCreation", 145, 137), _target(obj._target){}

	ShrubberyCreationForm	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & obj){
		return ShrubberyCreationForm(obj);
	}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if (getExGrade() < executor.getGrade())
		throw GradeTooLowException();
	else if (!isSign())
		throw ExecuteNotSignedFormException();
	else{
		std::ofstream	fout;
		fout.open(_target + "_shrubbery", std::ios_base::trunc);
		if (!fout.is_open())
			return ;
		fout << "          .     .  .      +     .      .          ." << std::endl
			<< "     .       .      .     #       .           ." << std::endl
			<< "        .      .         ###            .      .      ." << std::endl
			<< "      .      .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl
			<< "          .      . \"####\"###\"####\"  ." << std::endl
			<< "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl
			<< "  .             \"#########\"#########\"        .        ." << std::endl
			<< "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl
			<< "     .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl
			<< "                .\"##\"#####\"#####\"##\"           .      ." << std::endl
			<< "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl
			<< "      .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl
			<< "    .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl
			<< "            .     \"      000      \"    .     ." << std::endl
			<< "       .         .   .   000     .        .       ." << std::endl
			<< ".. .. ..................O000O........................ ......" << std::endl;
		fout.close();
	}
}
