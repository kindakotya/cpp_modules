/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmayweat <gmayweat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 20:06:55 by gmayweat          #+#    #+#             */
/*   Updated: 2021/08/11 01:27:22 by gmayweat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	for (u_int8_t i = 0; i < 8; i++)
		this->contacts[i] = Contact();
	this->next_number = 0;
	this->nu_of_contacts = 0;
}

// PhoneBook::~PhoneBook()
// {}

void	PhoneBook::add()
{
	for (u_int8_t i = Contact::FIRST_NAME; i < Contact::DARKEST_SECRET; i++){
		std::cout << "Enter a " << this->contacts->fields[i] << ' ';
		std::cin >> this->contacts[this->next_number].infos[i];
	}
	// for (u_int8_t i = 0; i < 5; i++)
	// 	std::cout << this->contacts[next_number].fields[i] << '\t'
	// 	<< this->contacts[next_number].infos[i] << std::endl;
	++this->nu_of_contacts;
	this->next_number = (this->next_number == 7) ? 0 : this->next_number + 1;
}

void	PhoneBook::search()
{
	

	for(u_int8_t i = 0; i < nu_of_contacts; i++)
	{
		std::cout << i + 1 << '\t' << contacts[i].infos[Contact::FIRST_NAME]
		<< std::endl;
	}
}

void	PhoneBook::open()
{
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