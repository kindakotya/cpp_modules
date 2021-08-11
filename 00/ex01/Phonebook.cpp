/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 20:06:55 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/11 18:48:49 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	for (u_int16_t i = 0; i < PHONE_BOOK_SIZE; i++)
		contacts[i] = Contact();
	next_number = 0;
	nu_of_contacts = 0;
}

void	PhoneBook::add()
{
	for (u_int16_t i = Contact::FIRST_NAME; i <= Contact::DARKEST_SECRET; i++){
		std::cout << "Enter a " << contacts->fields[i] << ": ";
		std::cin >> contacts[next_number].infos[i];
	}
	nu_of_contacts = (nu_of_contacts == PHONE_BOOK_SIZE) ? nu_of_contacts
														: nu_of_contacts + 1;
	next_number = (next_number == PHONE_BOOK_SIZE - 1) ? 0 : next_number + 1;
}

void	PhoneBook::search()
{
u_int16_t	index = 0;

	if (nu_of_contacts == 0){
		std::cout << "There is no contacts, friend." << std::endl;
		return ;
	}
	std::cout << std::string(45, '_') << std::endl;
	for (u_int16_t i = 0; i < nu_of_contacts; i++)
		contacts[i].print(i, Contact::NICKNAME);
	std::cout << std::string(45, '-') << std::endl;
	while (index < 1 || index > nu_of_contacts){
		std::cout << "Gime index, please: ";
		std::cin >> index;
		if (index < 1 || index > nu_of_contacts)
			std::cout << "Index must be a number from 1 to "
						<< nu_of_contacts << std::endl;
	}
	contacts[index - 1].print(index - 1, Contact::DARKEST_SECRET);
}

void	PhoneBook::open()
{
	std::string	command;

	while (1)
	{
		std::cout << "Enter a command: ";
		std::cin >> command;
		if (command == "ADD")
			add();
		else if (command == "SEARCH")
			search();
		else if (command == "EXIT")
			std::exit(0);
		else
			std::cout << "U have to write: \"ADD\", \"SEARCH\" or \"EXIT\""
					<< std::endl;
	}
}