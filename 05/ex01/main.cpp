/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 01:38:48 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/06 03:02:12 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
	{
		std::cout << "Standart test:" << std::endl;
		Form		form21("21", 14, 13);
		Bureaucrat	garry("Garry", 1);
		std::cout << "Form form21(\"21\", 14, 13): " << form21 << std::endl;
		garry.signForm(form21);
		std::cout << form21 << std::endl;
	}
	{
		std::cout << std::endl << "Too low constructor test:" << std::endl;
		try{
			std::cout << "Form		form21(\"21\", 151, 13): ";
			Form		form21("21", 151, 13);
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << "Too high constructor test:" << std::endl;
		try{
			std::cout << "Form		form21(\"21\", 14, 0): ";
			Form		form21("21", 14, 0);
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << "Too low sign test:" << std::endl;
		Form		form21("21", 14, 13);
		Bureaucrat	garry("Garry", 15);
		std::cout << "Form form21(\"21\", 14, 13): " << form21 << std::endl;
		garry.signForm(form21);
		std::cout << form21 << std::endl;
	}
	return 0;
}
