/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 20:06:55 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/10 23:49:48 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{}

void	PhoneBook::add()
{}

void	PhoneBook::search()
{}

void	PhoneBook::open()
{
	u_int8_t	i = 0;
	std::string	command;

	while (1)
	{
		std::cout << "Enter a command: ";
		std::cin >> command;
		if (command == "ADD")
			this->add();
		else if (command == "SEARCH")
			this->search();
		else if (command == "EXIT")
			std::exit(0);
		std::cout << std::endl;
	}
}