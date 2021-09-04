/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 01:38:48 by gmayweat          #+#    #+#             */
/*   Updated: 2021/09/05 02:52:02 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	std::cout << "Constructor test:" << std::endl;
	{
		try{
			std::cout << "Bureaucrat kevin(\"Kevin\", 140): ";
			Bureaucrat kevin("Kevin", 140);
			std::cout << kevin << std::endl;
			std::cout << "Bureaucrat garry(\"Garry\", 160): ";
			Bureaucrat garry("Garry", 160);
			std::cout << garry << std::endl;
		}
		catch(std::exception & e){
			std::cout << e.what() << std::endl;
		}
	}

	{
		try{
			std::cout << "Bureaucrat kevin(\"Kevin\", 1): ";
			Bureaucrat kevin("Kevin", 1);
			std::cout << kevin << std::endl;
			std::cout << "Bureaucrat garry(\"Garry\", 0): ";
			Bureaucrat garry("Garry", 0);
			std::cout << garry << std::endl;
		}
		catch(std::exception & e){
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "Decrement test:" << std::endl;
	{
		try{
			std::cout << "Bureaucrat kevin(\"Kevin\", 140): ";
			Bureaucrat kevin("Kevin", 149);
			std::cout << kevin << std::endl;
			std::cout << "--kevin: " << --kevin << std::endl;
			std::cout << "--kevin: " << --kevin << std::endl;
		}
		catch(std::exception & e){
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl << "Increment test:" << std::endl;
	{
		try{
			std::cout << "Bureaucrat garry(\"Garry\", 2): ";
			Bureaucrat garry("Garry", 2);
			std::cout << garry << std::endl;
			std::cout << "++garry: " << ++garry << std::endl;
			std::cout << "++garry: " << ++garry << std::endl;
		}
		catch(std::exception & e){
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
