/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 01:38:48 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/07 19:30:47 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

int main()
{
	Bureaucrat	hermes("Hermes Conrad", 1);
	Bureaucrat	philip("Philip J. Fry", 150);
	std::cout << hermes << std::endl << philip << std::endl << std::endl;
	{
		std::cout << "PresidentialPardonForm test:" << std::endl;
		PresidentialPardonForm	form("Nixon");
		std::cout << form << std::endl;
		std::cout << "\033[1;31mhermes.executeForm(form):\033[1;0m "; hermes.executeForm(form);
		std::cout << "\033[1;31mhermes.signForm(form):\033[1;0m "; hermes.signForm(form);
		std::cout << "\033[1;31mphilip.executeForm(form):\033[1;0m "; philip.executeForm(form);
		std::cout << "\033[1;31mhermes.executeForm(form):\033[1;0m "; hermes.executeForm(form);
	}
	{
		std::cout << std::endl << "RobotomyRequestForm test:" << std::endl;
		RobotomyRequestForm	form("Bender");
		std::cout << form << std::endl;
		std::cout << "\033[1;31mhermes.executeForm(form):\033[1;0m "; hermes.executeForm(form);
		std::cout << "\033[1;31mhermes.signForm(form):\033[1;0m "; hermes.signForm(form);
		std::cout << "\033[1;31mphilip.executeForm(form):\033[1;0m "; philip.executeForm(form);
		std::cout << "\033[1;31mhermes.executeForm(form):\033[1;0m "; hermes.executeForm(form);
	}
	{
		std::cout << std::endl << "ShrubberyCreationForm test:" << std::endl;
		ShrubberyCreationForm	form("Robo Santa");
		std::cout << form << std::endl;
		std::cout << "\033[1;31mhermes.executeForm(form):\033[1;0m "; hermes.executeForm(form);
		std::cout << "\033[1;31mhermes.signForm(form):\033[1;0m "; hermes.signForm(form);
		std::cout << "\033[1;31mphilip.executeForm(form):\033[1;0m "; philip.executeForm(form);
		std::cout << "\033[1;31mhermes.executeForm(form):\033[1;0m "; hermes.executeForm(form);
	}
	return 0;
}
